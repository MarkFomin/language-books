/*
 * Эта программа выводит сумму двух чиловых 
 * агументов командной строки.
 */
#include<iostream>
#include<ctype.h>
using namespace std;
int main(int argc, char *argv[]){
	double a,b;
	if(argc!=3){
		cout<<"Использование: "<<argv[0]<<" [число] [число]\n";
		return 1;
	}
	a=atof(argv[1]);// Преобразуем первый аргумент командной строки
	b=atof(argv[2]);// Преобразуем второй аргумент командной строки
	cout<<a+b<<"\n";
	return 0;
}
