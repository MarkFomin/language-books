/*
 * Самостоятельно усовершенствуйте функцию show_binary(), чтобы
 * она показывала в значении unsigned int все биты, а не только пра­
 * вые восемь.
 */
#include<iostream>
using namespace std;
void show_binary(unsigned int u);
int main(){
	unsigned int num = 0x88020304;
	show_binary(num);
	return 0;
}
void show_binary(unsigned int u){
	int size = sizeof (unsigned int);
	unsigned int shift = 0x80<<(size-1)*8;
	for(unsigned int t=shift; t>0; t/=2){
		if(t&u)cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
}
