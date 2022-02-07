/*
 * Обращение к закрытым данным посредством функций доступа.
 */
#include<iostream>
#include<cstring>
using namespace std;
// Класс для двумерных объектов.
class TwoDShape {
	//эти члены закрыты
	double width;
	double height;
public:
	void showDim(){
		cout<<"Ширина и высота составляют: "<<width<<" и "<<height<<"\n";
	}
	// Функции доступа
	double getWidth(){ return width; }
	double getHeight(){ return height; }
	void setWidth(double w) { width=w; }
	void setHeight(double h) { height=h; }
};
// Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
public:
	char style[40];
	double area(){
		return getWidth()*getHeight()/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
int main(){
	Triangle t1;
	Triangle t2;
	t1.setWidth(4.0);
	t1.setHeight(4.0);
	strcpy(t1.style, "равнобедренный");
	t2.setWidth(8.0);
	t2.setHeight(12.0);
	strcpy(t2.style, "прямоугольный");
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
