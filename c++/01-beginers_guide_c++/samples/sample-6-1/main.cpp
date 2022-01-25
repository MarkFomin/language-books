/*
 * Изменение переданного по значению параметра
 * не изменяет значение аргумента
 */
#include<iostream>
using namespace std;
double reciprocal(double x);
int main(){
	double t=10.0;
	cout<<"Обратное значение от 10.0 составляет: "<<reciprocal(t)<<"\n";
	cout<<"Значение t все еще равно: "<<t<<"\n";
	return 0;
}
// Возврат обратного значения.
double reciprocal(double x){
	x=1/x;// создадим обратное значение
	return x;
}
