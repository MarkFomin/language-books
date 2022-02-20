/*
 * Демонстрация преобразования типов.
 */
#include<iostream>
using namespace std;
class Base {
	virtual void f(){};//сделаем класс полиморфным
};
class Derived:public Base{
	//...
};
int main(){
	Base *bp, baseob;
	Derived *dp, d_ob;
	bp=&d_ob;//базовый указатель указывает на объект Derived
	dp=dynamic_cast<Derived*>(bp);
	cout<<"dp указывает на тип "<<typeid(*dp).name()<<"\n";
	char *b;
	const char a = 'a';
	b=const_cast<char*>(&a);
	*b='x';
	cout<<"b теперь равно "<<*b<<"\n";
	int i=123;
	float *f;
	f=reinterpret_cast<float*>(&i);
	cout<<"f теперь равно "<<*f<<"\n";
}
