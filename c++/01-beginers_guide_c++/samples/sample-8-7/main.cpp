/*
 * Альтернативный способ инициализации.
 */
#include<iostream>
using namespace std;
class MyClass{
public:
	// Объявим конструктор и деструктор.
	MyClass(int i);//конструктор
	~MyClass();    //дестуктор
	int x;
};
// Реализация параметрического конструктора MyClass.
MyClass::MyClass(int i){
	x=i;
}
// Реализация деструктора MyClass
MyClass::~MyClass(){
	cout<<"Уничтожение объекта, у которого значение x равно "<<x<<"\n";
}
int main(){
	MyClass obj=5;//вызов MyClass(5)
	cout<<""<<obj.x<<"\n";
	return 0;
}
