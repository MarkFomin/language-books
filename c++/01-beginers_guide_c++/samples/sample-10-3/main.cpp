/*
 * Демонстрация наследования public.
 */
#include<iostream> 
using namespace std;
class B {
	int i, j;
public:
	void set(int a, int b){i=a; j=b;}
	void show(){ cout<<i<<", "<<j<<"\n"; }
};
class D : public B {
	int k;
public:
	D(int x){
		k=x;
		// i=10;//Ошибка! i объявлена private в B и недоступна в D.
	}
	void showk(){ cout<<k<<"\n";}
};
int main(){
	D ob=3;
	ob.set(1,2);//функция доступа базового класса
	ob.show();  //функция доступа базового класса
	ob.showk(); //функция доступа производного класса
	return 0;
}
