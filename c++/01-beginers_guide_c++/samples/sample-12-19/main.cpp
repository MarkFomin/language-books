/*
 * Выделение памяти под объект.
 */
#include<iostream>
using namespace std;
class Rectangle {
	int width;
	int height;
public:
	Rectangle(int w, int h){
		width=w;
		height=h;
		cout<<"Конструируем прямоугольник размером "<<width<<" на "<<height<<".\n";
	}
	~Rectangle(){
		cout<<"Уничтожаем прямоугольник размером "<<width<<" на "<<height<<".\n";
	}
	int area(){
		return width * height;
	}
};
int main(){
	Rectangle *p;
	try {
		p = new Rectangle(10,8);
	} catch (bad_alloc const&) {
		cout<<"Ошибка выделения\n";
		return 1;
	}
	cout<<"Площадь равна: "<<p->area()<<"\n";
	delete p;
	return 0;
}
