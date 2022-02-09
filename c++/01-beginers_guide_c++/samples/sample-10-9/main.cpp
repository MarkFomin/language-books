/*
 * Многоуровневая иерархия.
 */
#include<iostream>
#include<cstring>
using namespace std;
// Класс двумерных объектов.
class TwoDShape {
	//эти члены закрыты.
	double width;
	double height;
public:
	// Конструктор по умолчани.
	TwoDShape(){width=height=0.0;}
	// Конструктор для TwoDShape.
	TwoDShape(double w, double h){
		width=w;
		height=h;
	}
	// Конструируем объект с равными шириной и высотой.
	TwoDShape(double x){
		width=height=x;
	}
	void showDim(){
		cout<<"Ширина и высота составляют: "<<width<<" и "<<height<<"\n";
	}
	// Функции доступа.
	double getWidth(){ return width; }
	double getHeight(){ return height; }
	void setWidth(double w){ width=w; }
	void setHeight(double h){ height=h; }
};
// Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
	char style[40];//теперь private
public:
	/*
	 * Конструктор по умолчанию. Он автоматически вызывает
	 * контсруктор по умолчанию TwoDShape.
	 */
	Triangle(){
		strcpy(style, "неизвестно");
	}
	// Конструктор с тремя параметрами.
	Triangle(const char *str, double w, double h):TwoDShape(w,h){
		strcpy(style, str);
	}
	// Конструируем равнобедренный треугольник.
	Triangle(double x):TwoDShape(x){
		strcpy(style, "равнобедренный");
	}
	double area(){ 
		return getWidth()*getHeight()/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
// Расширим Triangle.
class TriangleColor : public Triangle {
	char color[40];
public:
	TriangleColor(const char *clr, char const *style, double w, double h):Triangle(style, w, h){
		strcpy(color, clr);
	}
	TriangleColor(const char *clr, double x):Triangle(x){
		strcpy(color, clr);
	}
	// Выведем цвет.
	void showColor(){
		cout<<"Цвет "<<color<<"\n";
	}
};
int main(){
	TriangleColor t1("синий", "прямоугольный", 8.0, 12.0);
	TriangleColor t2("красный", 2.0);
	cout<<"Данные о t1:\n";
	t1.showStyle();
	t1.showDim();
	t1.showColor();
	cout<<"Площадь равна: "<<t1.area()<<"\n";
	cout<<"\n";
	cout<<"Данные о t2:\n";
	t2.showStyle();
	t2.showDim();
	t2.showColor();
	cout<<"Площадь равна: "<<t2.area()<<"\n";
	return 0;
}
