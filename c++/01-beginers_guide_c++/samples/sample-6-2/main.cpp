/*
 * Демонстрация варианта swap() с указателями.
 */
#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main(){
	int i, j;
	i=10;
	j=20;
	cout<<"Исходные значения i: "<<i<<", j: "<<j<<"\n";
	swap(&i, &j);// вызов swap() с адресами i и j 
	cout<<"Новые значения i: "<<i<<", j: "<<j<<"\n";
	return 0;
}
// Обменяем значения, на которые указывают x и y.
void swap(int *x, int *y){
	int temp;
	temp=*x;// сохраним значение с адресом x
	*x=*y;  // поместим значение с адресом y в переменную с адресом x
	*y=temp;// поместим значение с адресом x в переменную с адресом y
}
