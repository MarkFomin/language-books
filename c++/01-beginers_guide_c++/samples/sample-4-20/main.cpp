/*
 * Напишите программу, которая запрашивает у пользователя две
 * строки, а затем сравнивает эти строки, не обращая внимания на
 * регистр букв. В этом случае "ok" и "ОК" будут считаться равными.
 */
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str1[80], str2[80];
	char *p1, *p2;
	cout<<"Введите строку 1: ";
	cin>>str1;
	cout<<"Введите строку 2: ";
	cin>>str2;
	p1=str1;
	p2=str2;
	do {
		if(tolower(*p1)!=tolower(*p2)) break;
	} while(*p1++ && *p2++);
	if(*p1==*p2){
		cout << "Строки совпадают за исключением возможного " <<
		"несовпадения регистра букв.\n" ;
	} else {
		cout << "Строки не совпадают.\n";
	}
	return 0;
}
