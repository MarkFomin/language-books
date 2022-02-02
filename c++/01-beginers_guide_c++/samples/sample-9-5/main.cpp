/*
 * Конструкторы, деструкторы и передача объектов.
 */
#include<iostream>
using namespace std;
class MyClass {
	int val;
public:
	MyClass(int i){
		cout<<"Внутри конструктора.\n";
		val=i;
	}
	~MyClass(){
		cout<<"Уничтожаем.\n";
	}
	int getval(){return val;}
	void setval(int i){val=i;}
};
void display(MyClass &ob){
	cout<<ob.getval()<<"\n";
}
void change(MyClass &ob){
	ob.setval(100);
}
int main(){
	MyClass a(10);
	cout<<"Перед вызовом display()\n";
	display(a);
	cout<<"Перед вызовом change()\n";
	change(a);
	cout<<"После вызова change()\n";
	display(a);
	return 0;
}
