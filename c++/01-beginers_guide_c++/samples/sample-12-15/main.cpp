/*
 * Демонстрация специализации класса.
 */
#include<iostream>
using namespace std;
template <class T> class MyClass {
	T x;
public:
	MyClass(T a){
		x=a;
		cout<<"Внутри родового класса MyClass.\n";
	}
	T getx() { return x; }
};
// Явная специализация для int.
template <> class MyClass <int> {
	int x;
public:
	MyClass(int a){
		x=a;
		cout<<"Внутри специализации MyClass<int>.\n";
	}
	int getx() { return x; }
};
int main(){
	MyClass<double> d(10.1);
	cout<<"double: "<<d.getx()<<"\n";
	MyClass<int> i(5);
	cout<<"int: "<<i.getx()<<"\n";
	return 0;
}
