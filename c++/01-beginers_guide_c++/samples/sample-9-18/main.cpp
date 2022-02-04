/*
 * Демонстрация префиксного и постфиксного ++
 */
#include<iostream>
using namespace std;
class ThreeD {
	int x, y, z;// Трехмерные координаты.
public:
	ThreeD(){x=y=z=0;}
	ThreeD(int i, int j, int k){x=i;y=j;z=k;}
	ThreeD operator++();//префиксный вариант ++
	ThreeD operator++(int);//постфиксный вариант ++
	void show();
};
// Перегрузим префиксный вариант ++.
ThreeD ThreeD::operator++(){
	// инкримент x,y,z
	x++;
	y++;
	z++;
	return *this;//вернем измененное значение
}
// Перегрузим постфиксный вариант ++.
ThreeD ThreeD::operator++(int){
	ThreeD temp=*this;//сохранем исходное значение
	// инкримент x,y,z
	x++;
	y++;
	z++;
	return temp;//вернем исходное значение
}
// Выведем координаты X, Y, Z.
void ThreeD::show(){
	cout<<x<<", "<<y<<", "<<z<<"\n";
}
int main(){
	ThreeD a(1,2,3);
	ThreeD b;
	cout<<"Исходное значение a: ";
	a.show();
	cout<<"Исходное значение b: ";
	b.show();
	cout<<"\n";
	++a;//префиксный инкримент
	cout<<"Значение a после ++a: ";
	a.show();
	a++;//постфиксный инкримент
	cout<<"Значение a после a++: ";
	a.show();
	cout<<"\n";
	b=++a;//b получает значение a после инкримента
	cout<<"Значение a после b=++a: ";
	a.show();
	cout<<"Значение b после b=++a: ";
	b.show();
	cout<<"\n";
	b=a++;//b получает значение a перед инкриментом
	cout<<"Значение a после b=a++: ";
	a.show();
	cout<<"Значение b после b=a++: ";
	b.show();
	return 0;
}
