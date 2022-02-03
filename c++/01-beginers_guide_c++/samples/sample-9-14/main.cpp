/*
 * Демонстрация безымянного объединения.
 */
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	//объявим безымянное объединение
	union {
		long l;
		double d;
		char s[4];
	};
	//теперь обратимся к элементам объединения непосредственно
	l=100000;
	cout<<"l: "<<l<<"\n";
	d=123.2342;
	cout<<"d: "<<d<<"\n";
	strcpy(s, "hi");
	cout<<"s: "<<s<<"\n";
	return 0;
}
