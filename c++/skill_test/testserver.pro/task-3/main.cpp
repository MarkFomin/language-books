/*
 * Каков результат работы следующего кода?\
 * 1) Код не скомпилируется
 * 2) Вывод в консоль: 321 (x)
 * 2) Вывод в консоль: 331
 * 2) Вывод в консоль: 221
 * 2) Вывод в консоль: 333
 */
#include<iostream>
using namespace std;
class A {
public:
	void f() {cout<<"1";}
	void f(int) {cout<<"2";}
};
class B : public A {
public:
	using A::f;
	void f(bool){cout<<"3";}
};
int main(){
	B b;
	b.f(true);
	b.f(2);
	b.f();
}
