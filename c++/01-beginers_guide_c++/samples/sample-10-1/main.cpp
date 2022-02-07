/*
 * Простая иерархия классов.
 */
#include<iostream>
#include<string.h>
using namespace std;
// Класс двумерных объектов
class TwoDShape {
public:
	int width;
	int height;
	void showDim(){
		cout<<"Ширина и высота составляют: "<<width<<" и "<<height<<"\n";
	}
};
// Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
public:
	char style[40];
	double area(){
		return width*height/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
int main(){
	Triangle t1;
	Triangle t2;
	t1.width=4.0;
	t1.height=4.0;
	strcpy(t1.style,"равнобедренный");
	t2.width=8.0;
	t2.height=12.0;
	strcpy(t2.style,"прямоугольный");
	cout<<"Данные о t1:\n";
	t1.showStyle();
	t1.showDim();
	cout<<"Площадь равна: "<<t1.area()<<"\n";
	cout<<"\n";
	cout<<"Данные о t2:\n";
	t2.showStyle();
	t2.showDim();
	cout<<"Площадь равна: "<<t2.area()<<"\n";
	return 0;
}
