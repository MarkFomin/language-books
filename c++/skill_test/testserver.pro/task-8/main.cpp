/*
 * Каков порядок вызова конструкторов в следующем фрагменте кода?
 * 1) A(), C(), B()
 * 2) A(), B(), C() (x)
 * 3) C(), A(), B()
 * 4) C(), B(), A()
 * 5) B(), A(), C()
 */
#include<iostream>
using namespace std;
class A {
public:
	A(){
		cout<<"A()";
	}
};
class B : virtual public A {
public:
	B(){
		cout<<"B()";
	}
};
class C : public B {
public:
	C(){
		cout<<"C()";
	}
};
int main(){
	C c;
	return 0;
}
