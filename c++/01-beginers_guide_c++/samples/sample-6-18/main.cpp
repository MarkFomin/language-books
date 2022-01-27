/*
 * Модифицируйте вариант swap() со ссылкой, чтобы помимо обмена
 * значений ее аргументов, она еще возвращала ссылку на меньший
 * аргумент. Назовите эту функцию min_swap().
 */
#include<iostream>
using namespace std;
double &min_swap(double &a, double &b);
int main(){
	double i, j, min;
	i=7.2;
	j=12.4;
	cout<<"Начальное значение i: "<<i<<", j: "<<j<<"\n";
	min = min_swap(j, i);
	cout<<"Обмен значениями i: "<<i<<", j: "<<j<<"\n";
	cout<<"Меньший агумент: "<<min<<"\n";
	return 0;
}
double &min_swap(double &a, double &b){
	double tmp=a;
	a=b;
	b=tmp;
	if(a>b) return b;
	return a;
}
