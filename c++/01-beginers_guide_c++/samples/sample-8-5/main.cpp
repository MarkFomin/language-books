/*
 * Параметрический конструктор
 */
#include<iostream>
using namespace std;
class MyClass {
public:
	int x;
	// Объявляем конструктор и деструктор
	MyClass(int i); //конструктор
	~MyClass();//деструктор
};
// Реализация параметрического конструктора.
MyClass::MyClass(int i){
	x=i;
}
// Реализация деструктора.
MyClass::~MyClass(){
	cout<<"Уничтожение объекта, у которого значение x равно "<<x<<"\n";
}
int main(){
	MyClass obj1(5);
	MyClass obj2(19);
	cout<<obj1.x<<" "<<obj2.x<<"\n";
	return 0;
}
