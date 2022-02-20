/*
 * Пример использования typeid в иерархии полиморфных классов.
 */
#include<iostream>
#include<typeinfo>
using namespace std;
class Base {
	virtual void f(){}//сделаем Base полиморфным
};
class Derived1:public Base {
	//...
};
class Derived2:public Base {
	//...
};
int main(){
	Base *p, baseob;
	Derived1 ob1;
	Derived2 ob2;
	for(int i=0;i<3;i++){
		switch(i){
			case 0: p=&baseob; break;
			case 1: p=&ob1; break;
			case 2: p=&ob2; break;
		}
		cout<<"p указывает на объект типа "<<typeid(*p).name()<<"\n";
	}
	return 0;
}
