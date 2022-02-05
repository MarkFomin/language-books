/*
 * Перегрузка int + объект и объект + int
 */
#include<iostream>
using namespace std;
class ThreeD {
	int x,y,z;// Трехмерные координаты.
public:
	ThreeD(){x=y=z=0;}
	ThreeD(int i, int j, int k){x=i;y=j;z=k;}
	friend ThreeD operator+(int op1, const ThreeD &op2);
	friend ThreeD operator+(const ThreeD &op1, int op2);
	void show();
};
// Эта функция обеспечивает int + ThreeD
ThreeD operator+(int op1, const ThreeD &op2){
	ThreeD temp;
	temp.x=op1+op2.x;
	temp.y=op1+op2.y;
	temp.z=op1+op2.z;
	return temp;
}
// Эта функция обеспечивает ThreeD + int
ThreeD operator+(const ThreeD &op1, int op2){
	ThreeD temp;
	temp.x=op1.x+op2;
	temp.y=op1.y+op2;
	temp.z=op1.z+op2;
	return temp;
}
// Выведем координаты X, Y, Z
void ThreeD::show(){
	cout<<x<<", "<<y<<", "<<z<<"\n";
}
int main(){
	ThreeD a(1,2,3), b;
	cout<<"Исходное значение a: ";
	a.show();
	cout<<"\n";
	b=a+10;//объект + int
	cout<<"Значение b после b=a+10: ";
	b.show();
	cout<<"\n";
	b=10+a;//int + объект
	cout<<"Значение b после b=10+a: ";
	b.show();
	return 0;
}
