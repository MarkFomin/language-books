/*
 * Ипользование функции swap() с параметрами-ссылками.
 */
#include<iostream>
using namespace std;
// Объявим swap() с использованием параметров-ссылок.
void swap(int &x, int &y);
int main(){
	int i, j;
	i=10;
	j=20;
	cout<<"Начальные значения i: "<<i<<", j: "<<j<<"\n";
	swap(i,j);
	cout<<"Новые значения i: "<<i<<", j: "<<j<<"\n";
	return 0;
}
/*
 * Здесь swap() определена как использующая передачу по ссылке,
 * а не передачу по значению. В результате функция может обменять
 * значения двух аргументов, указанных при ее вызове.
 */
void swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
