/*
 * Выделение памяти под массив объектов.
 */
#include<iostream>
using namespace std;
class Rectangle {
	int width;
	int height;
public:
	Rectangle(){
		width=height=0;
		cout<<"Конструируем прямоугольник размером "<<width<<" на "<<height<<"\n";
	}
	Rectangle(int w, int h){
		width=w;
		height=h;
		cout<<"Конструируем прямоугольник размером "<<width<<" на "<<height<<"\n";
	}
	~Rectangle(){
		cout<<"Уничтожаем прямоугольник размером "<<width<<" на "<<height<<"\n";
	}
	void set(int w, int h){
		width=w;
		height=h;
	}
	int area(){
		return width*height;
	}
};
int main(){
	Rectangle *p;
	try {
		p = new Rectangle[3];
	} catch (bad_alloc const&){
		cout<<"Ошибка выделения памяти.\n";
		return 1;
	}
	cout<<"\n";
	p[0].set(3,4);
	p[1].set(10,8);
	p[2].set(5,6);
	for(int i=0;i<3;i++){
		cout<<"Площадь равна "<<p[i].area()<<"\n";
	}
	cout<<"\n";
	delete[] p;
	return 0;
}
