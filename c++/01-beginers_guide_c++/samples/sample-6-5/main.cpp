/*
 * Возврат ссылки.
 */
#include<iostream>
using namespace std;
double &f();// функиция возвращает ссылку.
double val=100.0;
int main(){
	double x;
	cout<<f()<<"\n";// выведем значение val
	x=f();          // присвоим переменной x значение val 
	cout<<x<<"\n";  // выведем значение x
	f()=99.1;       // изменим значение val
	cout<<f()<<"\n";// выведем новое значение val
	return 0;
}
// Функция возвращает ссылку на double
double &f(){
	return val;// возврат сслыки на double
}
