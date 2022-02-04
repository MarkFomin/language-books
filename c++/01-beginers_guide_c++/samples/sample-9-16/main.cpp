/*
 * Определение + и = для класса ThreeD.
 */
#include<iostream>
using namespace std;
class ThreeD {
	int x,y,z; // Трехмерные координаты
public:
	ThreeD(){ x=y=z=0; }
	ThreeD(int i, int j, int k){ x=i;y=j;z=k; }
	ThreeD operator+ (const ThreeD &op2);//op1 подрузумевается
	ThreeD operator= (const ThreeD &op2);//op1 подрузумевается
	void show();
};
// Перегрузим оператор +
ThreeD ThreeD::operator+ (const ThreeD &op2){
	ThreeD temp;
	/*
	 * Это сложение целых чисел и по отношению к ним
	 * знак + сохраняет свое первоначальное назначение.
	 */
	temp.x=x+op2.x;
	temp.y=y+op2.y;
	temp.z=z+op2.z;
	return temp;
}
// Перегрузим присваивание.
ThreeD ThreeD::operator= (const ThreeD &op2){
	/*
	 * Это присваивание целых чисел и по отношению к ним
	 * знак = сохраняет свое первоначальное назначение.
	 */
	x=op2.x;
	y=op2.y;
	z=op2.z;
	return *this;
}
// Вывести координаты X, Y, Z.
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
	c=a+b;//сложим a и b
	cout<<"Значение c после c=a+b :";
	c.show();
	cout<<"\n";
	c=a+b+c;
	cout<<"Значение c после c=a+b+c :";
	c.show();
	cout<<"\n";
	c=b=a;//демонстрация множественного присваивания.
	cout<<"Значение c после c=b=a: ";
	c.show();
	cout<<"Значение b после c=b=a: ";
	b.show();
	return 0;
}
