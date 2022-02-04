/*
 * Перегрузка унарного оператора ++
 */
#include<iostream>
using namespace std;
class ThreeD {
	int x,y,z;
public:
	ThreeD(){x=y=z=0;}// Трехмерный координаты.
	ThreeD(int i, int j, int k){x=i; y=j; z=k;}
	ThreeD operator++();//префиксный вариант ++
	void show();
};
// Перегрузим префиксный вариант ++
ThreeD ThreeD::operator++(){
	//инкримент x, y и z
	x++;
	y++;
	z++;
	return *this;
}
// Выведем координаты X, Y, Z.
void ThreeD::show(){
	cout<<x<<", "<<y<<", "<<z<<"\n";
}
int main(){
	ThreeD a(1,2,3),b;
	cout<<"Исходное значение a: ";
	a.show();
	++a;//инкримент ++a
	cout<<"Значение a после ++a: ";
	a.show();
	return 0;
}
