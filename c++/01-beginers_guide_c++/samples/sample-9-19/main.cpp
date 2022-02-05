/*
 * Использование дружественной операторной функции.
 */
#include<iostream>
using namespace std;
class ThreeD {
	int x,y,z;// Трехмерные координаты.
public:
	ThreeD(){x=y=z=0;}
	ThreeD(int i, int j, int k){x=i; y=j; z=k;}
	friend ThreeD operator+ (const ThreeD &op1, const ThreeD &op2);
	void show();	
};
// + теперь является теперь дружественной функцией.
ThreeD operator+ (const ThreeD &op1, const ThreeD &op2){
	ThreeD temp;
	temp.x=op1.x+op2.x;
	temp.y=op1.y+op2.y;
	temp.z=op1.z+op2.z;
	return temp;
}
// Выведем координаты X, Y, Z.
void ThreeD::show(){
	cout<<x<<", "<<y<<", "<<z<<"\n";
}
int main(){
	ThreeD a(1,2,3), b(10,10,10), c;
	cout<<"Исходное значение a: ";
	a.show();
	cout<<"Исходное значение b: ";
	b.show();
	cout<<"\n";
	c=a+b;//сложим a+b
	cout<<"Значение c после c=a+b: ";
	c.show();
	cout<<"\n";
	c=a+b+c;//сложим a+b+c
	cout<<"Значение c после c=a+b+c: ";
	c.show();
	cout<<"\n";
	c=b=a;//демонстрация множественного присваивания
	cout<<"Значение c после c=b=a: ";
	c.show();
	cout<<"Значение b после c=b=a: ";
	b.show();
	return 0;
}
