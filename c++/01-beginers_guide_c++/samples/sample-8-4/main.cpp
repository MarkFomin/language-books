/*
 * Простой конструктор и деструктор.
 */
#include<iostream>
using namespace std;
class MyClass {
public:
	int x;
	// Объявим конструктор и деструтор.
	MyClass(); // конструктор 
	~MyClass();// деструктор
};
// Реализация конструктора MyClass.
MyClass::MyClass(){
	x=10;
}
// Реализация деструктора MyClass.
MyClass::~MyClass(){
	cout<<"Уничтожаем...\n";
}
int main(){
	MyClass obj1, obj2;
	cout<<obj1.x<<" "<<obj2.x<<"\n";
	return 0;
}
