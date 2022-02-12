/*
 * Демонстрация функций width(), precision() и fill().
 */
#include<iostream>
using namespace std;
int main(){
	cout.setf(ios::showpos);
	cout.setf(ios::scientific);
	cout<<123<<" "<<123.23<<"\n";
	cout.precision(2);//две цифры после десятичной точки
	cout.width(10);   //в поле шириной 10 символов
	cout<<123<<" ";
	cout.width(10);//установим ширину 10 символов
	cout<<123.23<<"\n";
	cout.fill('#');//заполнитель #
	cout.width(10);//в поле щириной 10 символов
	cout<<123<<" ";
	cout.width(10);//установим ширину 10 символов
	cout<<123.23<<"\n";
	return 0;
}
