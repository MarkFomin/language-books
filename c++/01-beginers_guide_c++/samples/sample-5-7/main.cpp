/*
 * Ипользование box() в выражении
 */
#include<iostream>
using namespace std;
//Ипользуем данные типа double
double box(double length, double width, double height);
int main(){
	double sum;
	sum=box(10.1,11.2,3.3)+box(5.5,6.6,7.7)+box(4.0,5.0,8.0);
	cout<<"Сумма объемов равна: "<<sum<<"\n";
	cout<<"Среднее значение объема равно: "<<sum/3.0<<"\n";
	return 0;
}
//Это вариант box() ипользует данные типа double
double box(double length, double width, double height){
	return length*width*height;
}
