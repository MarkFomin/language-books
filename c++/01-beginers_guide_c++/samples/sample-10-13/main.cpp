/*
 * Демонстрация наследования виртуальной функции.
 */
#include<iostream>
using namespace std;
class B {
public:
	virtual void who(){ cout<<"Базовый класс.\n"; }
};
class D1 : public B {
public:
	void who(){cout<<"Первый производный класс.\n"; }
};
class D2 : public B {
	//who() не определена
};
int main(){
	B base_obj;
	B *p;
	D1 d1_obj;
	D2 d2_obj;
	p=&base_obj;
	p->who();//обращение к who() из B
	p=&d1_obj;
	p->who();//обращение к who() из D1
	p=&d2_obj;
	p->who();	//обращение к who() из B, потому что
						//D2 не переопределил who()
	return 0;
}
