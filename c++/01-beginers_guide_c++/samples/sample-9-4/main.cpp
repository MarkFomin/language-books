/*
 * Конструторы, деструкторы и передача объектов.
 */
#include<iostream>
using namespace std;
class MyClass {
	int val;
public:
	MyClass(int i){
		cout<<"Внутри конструтора.\n";
		val=i;
	}
	~MyClass(){
		cout<<"Уничтожаем.\n";
	}
	int getval(){return val;}
};
void display(MyClass ob){
	cout<<ob.getval()<<"\n";
}
int main(){
	MyClass a(10);
	cout<<"Перед вызовом display().\n";
	display(a);
	cout<<"После вызова display().\n";
}
