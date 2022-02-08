/*
 * Добавление конструтора для TwoDShape.
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
	// Конструктор по умолчанию.
	TwoDShape(){width=height=0;}
	// Конструктор для TwoDShape.
	TwoDShape(double w, double h){width=w; height=h;}
	// Конструируем объект с равной шириной и высотой.
	TwoDShape(double x){width=height=x;}
	void showDim(){
		cout<<"Ширина и высота составляют: "<<width<<" и "<<height<<"\n";
	}
	//функции доступа
	void setWidth(double w){width=w;}
	void setHeight(double h){height=h;}
	double getHeight(){return height;}
	double getWidth(){return width;}
};
// Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
	char style[20];//теперь private;
public:
	/*
	 * Конструктор по умолчанию. Он автоматически вызывает
	 * конструтор по умолчанию TwoDShape.
	 */
	Triangle(){
		strcpy(style, "неизвестен");
	}
	// Конструтор с тремя параметрами.
	Triangle(const char *str, double w, double h):TwoDShape(w,h){
		strcpy(style, str);
	}
	// Сконструируем равнобедренный треугольник.
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
int main(){
	Triangle t1;
	Triangle t2("прямоугольный",8.0, 12.0);
	Triangle t3(4.0);
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
	cout<<"Данные о t3:\n";
	t3.showStyle();
	t3.showDim();
	cout<<"Площаль равна: "<<t3.area()<<"\n";
}
