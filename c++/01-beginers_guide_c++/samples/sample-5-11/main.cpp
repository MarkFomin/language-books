/*
 * Демонстрация объявления локальных переменных
 */
#include<iostream>
using namespace std;
int main(){
	int a;// объявим одну переменную
	cout<<"Введите число: ";
	cin>>a;
	int b;// объявим другую переменную
	cout<<"Введите второе число: ";
	cin>>b;
	cout<<"Произведение: "<<a*b<<"\n";
	return 0;
}
