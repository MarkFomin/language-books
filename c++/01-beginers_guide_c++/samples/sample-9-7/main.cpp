/*
 * Конструтор копий активизируется, когда объект
 * передается функции.
 */
#include<iostream>
using namespace std;
class MyClass{
	int val;
	int copynumber;
public:
	// Обычный конструктор.
	MyClass(int i){
		val=i;
		copynumber=0;
		cout<<"Внутри обычного конструтора.\n";
	}
	// Конструктор копий
	MyClass(const MyClass &ob){
		val=ob.val;
		copynumber=ob.copynumber+1;
		cout<<"Внутри конструтора копий\n";
	}
	~MyClass(){
		if(copynumber==0){
			cout<<"Уничтожение оригинал.\n";
		} else {
			cout<<"Уничтожение копии "<<copynumber<<".\n";
		}
	}
	int getval(){return val;}
	MyClass mkBigger(){
		return MyClass(val*2);
	}
};
void display(MyClass ob){
	cout<<ob.getval()<<"\n";
}
int main(){
	MyClass a(10);
	cout<<"mkBigger()\n";
	a=a.mkBigger();
	cout<<"display()\n";
	display(a);
	MyClass b=a;
	MyClass c=MyClass(b);
	MyClass d(c);
	return 0;
}
