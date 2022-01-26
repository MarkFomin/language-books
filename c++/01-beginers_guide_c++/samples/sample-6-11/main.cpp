/*
 * Автоматическое преобразование типа может влиять 
 * на вабор перегруженной функции.
 */
#include<iostream>
using namespace std;
void f(int x);
void f(short x);
void f(double x);
int main(){
	int i=10;
	double d=10.1;
	short s=99;
	float r=11.5F;
	f(i);// вызывается f(int)
	f(d);// вызывается f(double)
	f(s);// вызывается f(short)
	f(r);// вызывается f(double) - преобразование типа
	return 0;
}
void f(int x){
	cout<<"Внутри f(int): "<<x<<"\n";
}
void f(short x){
	cout<<"Внутри f(short): "<<x<<"\n";
}
void f(double x){
	cout<<"Внутри f(double): "<<x<<"\n";
}
