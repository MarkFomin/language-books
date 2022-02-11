/*
 * Создайте производный от TwoDShape класс с именем Circle (круг).
 * Включите в него функцию area(), вычисляющую площадь круга.
 */
#include<iostream>
#include<cstring>
using namespace std;
class TwoDShape {
	double width;
	double height;
	char name[40];
public:
	TwoDShape(){
		width=height=0.0;
		strcpy(name, "неизвестно");
	}
	TwoDShape(double h, double w, const char *n){
		width=w;
		height=h;
		strcpy(name, n);
	}
	TwoDShape(double x, const char *n){
		width=height=x;
		strcpy(name, n);
	}
	void showDim(){
		cout<<"Ширина и высота составляют "<<width<<" и "<<height<<"\n";
	}
	double getWidth(){ return width; }
	double getHeight(){ return height; }
	void setWidth(double w){ width=w; }
	void setHeight(double h){ height=h; }
	const char *getName(){ return name; }
	virtual double area()=0;
};
class Triangle : public TwoDShape {
	char style[40];
public:
	Triangle(){
		strcpy(style, "неизвестно");
	}
	Triangle(const char *str, double w, double h):TwoDShape(w, h, "треугольник"){
		strcpy(style, str);
	}
	Triangle(double x):TwoDShape(x, "треугольник"){
		strcpy(style, "равнобедренный");
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
	double area(){
		return getWidth()*getHeight()/2.0;
	}
};
class Rectangle : public TwoDShape {
public:
	Rectangle(double w, double h):TwoDShape(w, h, "прямоугольник"){}
	Rectangle(double x):TwoDShape(x, "прямоугольник"){}
	bool isSquare(){ return getWidth()==getHeight(); }
	double area() { return getWidth()*getHeight(); }
};
class Circle : public TwoDShape {
public:
	Circle(double r):TwoDShape(r, "окружность"){}
	double area() { return (getWidth()*getWidth()/2)*3.14; }
};
int main(){
	Triangle t1("прямоугльный", 8.0, 12.0);
	Triangle t2(7.0);
	Rectangle r1(10.0);
	Rectangle r2(10.0, 4.0);
	Circle c1(5.0);
	TwoDShape *shapes[5]={&t1, &r1, &r2, &t2, &c1 };
	for(int i=0; i<5; i++){
		cout<<"Объект представляет собой "<<shapes[i]->getName()<<"\n";
		cout<<"Площадь равна "<<shapes[i]->area()<<"\n";
	}
}
