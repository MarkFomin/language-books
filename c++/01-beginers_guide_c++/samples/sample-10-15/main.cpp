/*
 * Использование чистой виртуальной функции.
 */
#include<iostream>
#include<cstring>
using namespace std;
// Класс для двумерных объектов. 
class TwoDShape {
	//эти члены закрыты
	double width;
	double height;
	//добавим поле для названия фигуры
	char name[40];
public:
	// Конструктор по умолчанию.
	TwoDShape(){
		width=height=0.0;
		strcpy(name,"неизвестно");
	}
	// Конструктор для TwoDShape
	TwoDShape(double w, double h, const char *n){
		width=w;
		height=h;
		strcpy(name, n);
	}
	// Конструктор для объекта с равными шириной и высотой.
	TwoDShape(double x, const char *n){
		width=height=x;
		strcpy(name, n);
	}
	void showDim(){
		cout<<"Ширина и высота составляют "<<width<<" и "<<height<<"\n";
	}
	//функции доступа
	double getHeight(){ return height; }
	double getWidth(){ return width; }
	void setWidth(double w){ width=w; }
	void setHeight(double h){ height=h; }
	char const *getName(){ return name; }
	//area() теперь чистая виртуальная функция
	virtual double area()=0;
};
class Triangle : public TwoDShape {
	//теперь private
	char style[40];
public:
	/*
	 * Конструктор по умолчанию. Он автоматически вызывает
	 * конструктор по умолчанию TwoDShape.
	 */
	Triangle(){
		strcpy(style, "неизвестно");
	}
	// Конструктор с тремя параметрами.
	Triangle(char const *str, double w, double h):TwoDShape(w, h, "треугольник"){
		strcpy(style, str);
	}
	// Конструируем равнобедренный треугольник.
	Triangle(double x):TwoDShape(x, "треугольник"){
		strcpy(style, "равнобедренный");
	}
	// Переопределяем area() объявленную в TwoDShape.
	double area() {
		return getWidth()*getHeight()/2;
	}
	void showStyle(){
		cout<<"Треугольник "<<style<<"\n";
	}
};
// Производный от TwoDShape класс для прямоугольников.
class Rectangle : public TwoDShape {
public:
	// Конструируем прямоугольник.
	Rectangle(double w, double h):TwoDShape(w, h, "прямоугольник"){}
	// Конструируем квадрат.
	Rectangle(double x):TwoDShape(x, "прямоугольник"){}
	bool isSquare(){
		return getWidth()==getHeight();
	}
	// Второе переопределение функции area().
	double area(){
		return getWidth()*getHeight();
	}
};
int main(){
	// Объявим массив указателей на объекты TwoDShape.
	TwoDShape *shapes[4];
	Triangle t1("прямогульный", 8.0, 12.0);
	Rectangle r1(10.0);
	Rectangle r2(10.0,4.0);
	Triangle t2(7.0);
	shapes[0]=&t1;
	shapes[1]=&r1;
	shapes[2]=&r2;
	shapes[3]=&t2;
	for(int i=0; i<4; i++){
		cout<<"Объект представляет собой "<<shapes[i]->getName()<<"\n";
		cout<<"Площадь равна "<<shapes[i]->area()<<"\n";
		cout<<"\n";
	}
	return 0;
}
