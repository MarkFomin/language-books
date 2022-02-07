/*
 * Демонстрация наследования private.
 * Эта программа компилироваться не будет.
 */
#include<iostream>
using namespace std;
class B {
	int i, j;
public:
	void set(int a, int b){ i=a; j=b; }
	void show(){ cout<<i<<", "<<j<<"\n"; }
};
// Открытые элементы в B становятся закрытыми в D.
class D : private B {
	int k;
public:
	D(int x){k=x;}
	void showk() { cout<<k<<"\n"; }
	void showB() { show(); }
	void setB(int a, int b) { set(a, b); }
};
int main(){
	D ob(3);
	//ob.set(1,2);// Ошибка, нет доступа к set().
	//ob.show();  // Ошибка, нет доступа к show().
	ob.setB(1,2);
	ob.showB();
}
