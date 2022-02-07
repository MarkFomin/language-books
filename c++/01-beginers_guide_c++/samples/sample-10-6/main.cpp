/*
 * Добавление в класс Triangle конструктора.
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
	//функции доступа
	double getWidth(){return width;}
	double getHeight(){return height;}
	void setWidth(double w){width=w;}
	void setHeight(double h){height=h;}
};
//Triangle является производным от TwoDShape.
class Triangle : public TwoDShape {
	char style[40];//теперь private
public:
	//Конструктор для класса Triangle
	Triangle(char const *str, double w, double h){
		//инициализация части относящейся к базовому классу
		setWidth(w);
		setHeight(h);
		//инициализация части относящейся к производному классу
		if(str) strcpy(style, str);
	}
	double area(){
		return getWidth()*getHeight()/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
using namespace std;
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
	return 0;
}
