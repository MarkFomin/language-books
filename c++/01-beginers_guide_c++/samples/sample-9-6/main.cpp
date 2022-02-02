/*
 * Возврат объектов.
 */
#include<iostream>
using namespace std;
class MyClass {
	int val;
public:
	// Обычный конструктор.
	MyClass(int i){
		cout<<"Внутри конструтора.\n";
		val=i;
	}
	~MyClass(){
		cout<<"Уничтожаем\n";
	}
	int getval(){return val;}
	// Возврат объекта.
	MyClass mkBigger(){
		MyClass o(val*2);
		return o;
	}
};
void display(MyClass ob){
	cout<<ob.getval()<<"\n";
}
int main(){
	cout<<"Перед конструированием.\n";
	MyClass a(10);
	cout<<"После конструирования.\n";
	cout<<"Перед вызовом display()\n";
	display(a);
	cout<<"После возврата из display()\n";
	cout<<"Перед вызовом mkBigger()\n";
	a=a.mkBigger();
	cout<<"После возврата из mkBigger()\n";
	cout<<"Перед вторым вызовом display()\n";
	display(a);
	cout<<"После возврата из display()\n";
	return 0;
}
