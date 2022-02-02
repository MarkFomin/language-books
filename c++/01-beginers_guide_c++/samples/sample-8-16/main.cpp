/*
 * Создайте класс THangle, в котором хранятся длина основания и вы­
 * сота прямоугольного треугольника в двух закрытых переменных
 * экземпляра. Включите в класс конструктор, устанавливающий
 * значения этих переменных. Определите две функции. Первая
 * функция hypot() долж на возвращать длину гипотенузы треуголь­
 * ника, а вторая функция area( ) — его площадь.

 */
#include<iostream>
#include<math.h>
using namespace std;
class THangle {
	double a, b;
public:
	THangle(double i, double j){a=i;b=j;}
	double hypot(){ return sqrt(a*a+b*b); }
	double area(){ return (a*b)/2.0; }
};
int main(){
	double a=5.34;
	double b=8.42;
	THangle tgl(a,b);
	cout<<"Для треугольника с катетами: "<<a<<" и "<<b<<"\n";
	cout<<"Гипотенуза равна: "<<tgl.hypot()<<"\n";
	cout<<"Площадь равна: "<<tgl.area()<<"\n";
	return 0;
}
