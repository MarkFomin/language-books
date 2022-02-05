/*
 * Проект 9-1
 * Класс множества для символов.
 */
#include<iostream>
using namespace std;
const int MaxSize = 100;
class Set {
	int len;//число членов
	char members[MaxSize];//этот массив будет содержать множество.
	/*
	 * Функция find() закрыта, потому что она не спользуется
	 * вне класса Set.
	 */
	int find(char ch);//найти элемент
public:
	// Конструируем пустое множество.
	Set(){len=0;}
	// Возвращаем число элементов множества.
	int getLength(){return len;}
	void showset();//выводит множество на экран
	bool isMember(char ch);//проверяет на членство
	Set operator+(char ch);//добавляет элемент
	Set operator-(char ch);//удалеяет элемент
	Set operator+(const Set &ob);//образует объединение
	Set operator-(const Set &ob);//образует разность
};
/*
 * Возвращает индекс элемента, задаваемого 
 * параметром ch, или -1 если элемент не найден.
 */
int Set::find(char ch){
	for(int i=0; i<len; i++){
		if(members[i]==ch)return i;
	}
	return -1;
}
// Вывести множество на экран
void Set::showset(){
	cout<<"{ ";
	for(int i=0;i<len;i++){
		cout<<members[i]<<" ";
	}
	cout<<"}\n";
}
/*
 * Возвращает true, если ch есть член множества.
 * В противном случае возвращается false.
 */
bool Set::isMember(char ch){
	return find(ch)==-1;
}
//Добавление уникального элемента в множество.
Set Set::operator+(char ch){
	Set newset;
	if(len==MaxSize){
		cout<<"Множество полно\n";
		return *this;//вернуть существующие множество
	}
	newset=*this;
	// смотрим, не существует ли уже этот элемент
	if(find(ch)==-1){//если не найден, можно добавить
		//добавим новый элмент в множество
		newset.members[newset.len]=ch;
		newset.len++;
	}
	return newset;//возвращаем обновленное множество
}
//Удаляет элемент из множества
Set Set::operator-(char ch){
	Set newset;
	int i = find(ch);//i будет равно -1, если элемент не найден
	//копирование и уплотнение оставшихся элементов
	for(int j=0; j<len; j++){
		if(i!=j)newset=newset+members[j];
	}
	return newset;
}
// Объединение множеств.
Set Set::operator+(const Set &ob){
	Set newset=*this;//копируем первое множество
	//Добавляем уникальные элменты из второго множестваы
	for(int i=0;i<ob.len;i++){
		newset=newset+ob.members[i];
	}
	return newset;//возвращаем обновленное множество
}
// Разность множеств.
Set Set::operator-(const Set& ob){
	Set newset=*this;//копируем первое множество
	//Вычитаем элменты второго множесва
	for(int i=0;i<ob.len;i++){
		newset=newset-ob.members[i];
	}
	return newset;//возвращаем обновленное множество
}
// Демонстрация класса Set.
int main(){
	// Сконструируем три пустых множества.
	Set s1, s2, s3;
	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	cout<<"s1 после добавления A B C: ";
	s1.showset();
	cout<<"\n";
	cout<<"Проверяем на членство, используя isMember(): \n";
	if(s1.isMember('B')){
		cout<<"B явлется членом s1.\n";
	} else {
		cout<<"B не является членом s1.\n";
	}
	if(s1.isMember('T')){
		cout<<"T является членом s1.\n";
	} else {
		cout<<"T не является членом s1.\n";
	}
	cout<<"\n";
	s1=s1-'B';
	cout<<"s1 после s1=s1-'B': ";
	s1.showset();
	s1=s1-'A';
	cout<<"s1 после s1=s1-'A': ";
	s1.showset();
	s1=s1-'C';
	cout<<"s1 после s1=s1-'C': ";
	s1.showset();
	cout<<"\n";
	s1=s1+'A';
	s1=s1+'B';
	s1=s1+'C';
	cout<<"s1 после добавления A, B, C: ";
	s1.showset();
	cout<<"\n";
	s2=s2+'A';
	s2=s2+'X';
	s2=s2+'W';
	cout<<"s2 после добавления A, X, W: ";
	s2.showset();
	cout<<"\n";
	s3=s1+s2;
	cout<<"s3 после s3=s1+s2: ";
	s3.showset();
	cout<<"\n";
	s3=s3-s1;
	cout<<"s3 после s3=s3-s1: ";
	s3.showset();
	cout<<"\n";
	s2=s2-s2;//очистка s2
	cout<<"s2 после s2=s2-s2: ";
	s2.showset();
	cout<<"\n";
	// Добавим A, B, C в обратном порядке.
	s2=s2+'C';
	s2=s2+'B';
	s2=s2+'A';
	cout<<"s2 после добавления C, B, A: ";
	s2.showset();
	return 0;
}
