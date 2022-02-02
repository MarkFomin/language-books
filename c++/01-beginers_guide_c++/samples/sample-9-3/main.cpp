/*
 * Передача функции объекта.
 */
#include<iostream>
using namespace std;
class MyClass{
	int val;
public:
	MyClass(int i){val=i;}
	void setval(int i){val=i;}
	int getval(){return val;}
};
void display(MyClass ob){
	cout<<ob.getval()<<"\n";
}
void change(MyClass ob){
	ob.setval(100);//не влияет на агумент
	cout<<"Значение внутри change(): ";
	display(ob);
}
int main(){
	MyClass a(10);
	cout<<"Значение перед вызовом change(): ";
	display(a);
	change(a);
	cout<<"Значение после вызова change(): ";
	display(a);
	return 0;
}
