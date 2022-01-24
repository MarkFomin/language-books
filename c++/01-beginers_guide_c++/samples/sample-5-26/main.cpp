/*
 * Создайте функцию hypot(), которая вычисляет гипотенузу прямо­
 * угольного треугольника по двум его катетам. Продемонстрируйте
 * использование этой функции в программе. Вам понадобится биб­
 * лиотечная функция sqrt( ), которая возвращает квадратный корень
 * из его аргумента.
 */
#include<iostream>
#include<math.h>
using namespace std;
double hypot(double a, double b);
int main(){
	double a, b;
	a=3.2;
	b=4.5;
	cout<<"Гипотенуза равна: "<<hypot(a, b)<<"\n";
	return 0;
}
double hypot(double a, double b){
	return sqrt(a*a+b*b);
}
