/*
 * 10. Для класса Set, разработанного в П роекте 9-1:
 * - определите операто­ры < и > так, чтобы они определяли, 
 * является ли одно множество подмножеством или надмножеством другого.
 * - определите оператор & так, чтобы он возвращал пе­ресечение двух множеств.
 * - определить оператор | так, чтобы он возвра­щал строгую дизъюнкцию двух множеств. 
 * Строгаядизъюнкция со­стоит из всех элементов обоих множ еств за исклю чением совпа­дающих.

 */
#include<iostream>
using namespace std;
const int maxSetSize=100;
class Set {
	int len;
	char members[maxSetSize];
	int find(char ch) const;
public:
	Set(){len=0;}
	Set operator+(char ch);
	Set operator-(char ch);
	Set operator+(const Set &ob);
	Set operator-(const Set &ob);
	bool operator<(const Set &ob) const;
	bool operator>(const Set &ob) const;
	Set operator&(const Set &ob);
	Set operator|(const Set &ob);
	void showset();
	bool isMember(char ch);
	int getLength(){return len;}
};
int Set::find(char ch) const {
	for(int i=0; i<len; i++){
		if(members[i]==ch){
			return i;
		}
	}
	return -1;
}
Set Set::operator+ (char ch){
	Set newset;
	if(len==maxSetSize){
		return *this;
	}
	newset=*this;
	newset.members[newset.len]=ch;
	newset.len++;
	return newset;
}
Set Set::operator- (char ch){
	Set newset;
	if(find(ch)==-1){
		return *this;
	}
	for(int i=0; i<len; i++){
		if(members[i]!=ch){
			newset=newset+members[i];
		}
	}
	return newset;
}
Set Set::operator+ (const Set &ob){
	Set newset=*this;
	for(int i=0; i<ob.len; i++){
		if(newset.find(ob.members[i])==-1){
			newset=newset+ob.members[i];
		}
	}
	return newset;
}
Set Set::operator- (const Set &ob){
	Set newset=*this;
	for(int i=0; i<ob.len; i++){
		if(newset.find(ob.members[i])!=-1){
			newset=newset-ob.members[i];
		}
	}
	return newset;
}
/*
 * Пусть оператор < возвращает true, если левое множество является 
 * подмножеством множества с правой стороны, и false в обратном случае. 
 */
bool Set::operator< (const Set &ob) const {
	if(len>ob.len){
		return false;
	}
	for(int i=0; i<len; i++){
		if(ob.find(members[i])==-1){
			return false;
		}
	}
	return true;
}
/*
 * Пусть > возвращает true, если левое множество является надмножеством
 * множества с правой стороны, и false в обратном случае.
*/
bool Set::operator> (const Set &ob) const {
	return ob<*this;
}
Set Set::operator& (const Set &ob){
	Set newset;
	for(int i=0;i<len;i++){
		if(find(ob.members[i])!=-1){
			newset=newset+ob.members[i];
		}
	}
	return newset;
}
Set Set::operator| (const Set &ob) {
	Set newset=*this+ob-(*this&ob);
	return newset;
}

bool Set::isMember(char ch){
	return find(ch)!=-1;
}
void Set::showset(){
	cout<<"{ ";
	for(int i=0; i<len; i++){
		cout<<members[i]<<" ";
	}
	cout<<"}\n";
}

int main(){
	Set s1, s2, s3, s4;
	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	s1=s1+'D';
	cout<<"s1: ";
	s1.showset();
	if(s1.isMember('A')==true){
		cout<<"find 'A'\n";
	} else {
		cout<<"...\n";
	}
	if(!s1.isMember('S')){
		cout<<"not found 'S'\n";
	}
	s1=s1-'D';
	cout<<"s1:";
	s1.showset();
	s2=s2+'A';
	s2=s2+'Z';
	s2=s2+'W';
	cout<<"s2: ";
	s2.showset();
	s3=s1+s2;
	cout<<"s3: ";
	s3.showset();
	s3=s3-s1;
	cout<<"s3: ";
	s3.showset();
	cout<<"s3<s2: "<<(s3<s2?"true":"false")<<"\n";
	cout<<"s2<s3: "<<(s2<s3?"true":"false")<<"\n";
	
	cout<<"s3>s2: "<<(s3>s2?"true":"false")<<"\n";
	cout<<"s2>s3: "<<(s2>s3?"true":"false")<<"\n";
	
	s4=s1&s2;
	cout<<"s4: ";
	s4.showset();
	s4=s1|s2;
	cout<<"s4: ";
	s4.showset();
	s2=s2-s2;
	cout<<"s2: ";
	s2.showset();
	return 0;
}
