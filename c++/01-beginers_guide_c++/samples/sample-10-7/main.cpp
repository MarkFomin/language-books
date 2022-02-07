/*
 * Добавление конструктора в класс TwoDShape
 */
#include<iostream>
#include<cstring>
using namespace std;
// Класс для двумерного объекта.
class TwoDShape {
	double width;
	double height;
public:
	// Конструктор для TwoDShape.
	TwoDShape(int h, int w){ width=w; height=h;}
	void showDim(){
		cout<<"Ширина и высота составляют: "<<width<<" и "<<height<<"\n";
	}
	//функции доступа
	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width=w; }
	void setHeight(double h) { height=h; }
};
// Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
	char style[40];//теперь private
public:
	// Конструктор для Triangle.
	Triangle(char const *str, double w, double h):TwoDShape(w,h) {
		strcpy(style, str);
	}
	double area() {
		return getWidth()*getHeight()/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
int main(){
	Triangle t1("равнобедренный", 4.0, 4.0);
	Triangle t2("прямоугольный", 8.0, 12.0);
	cout<<"Данные о t1:\n";
	t1.showStyle();
	t1.showDim();
	cout<<"Площадь равна: "<<t1.area()<<"\n";
	cout<<"\n";
	cout<<"Данные о t2:\n";
	t2.showStyle();
	t2.showDim();
	cout<<"Площадь равна: "<<t2.area()<<"\n";
	cout<<"\n";
	return 0;
}
