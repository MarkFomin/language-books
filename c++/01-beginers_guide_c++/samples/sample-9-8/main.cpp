/*
 * Демонстрация дружественной функции.
 */
#include<iostream>
using namespace std;
class MyClass {
	int a,b;
public:
	MyClass(int i, int j){a=i, b=j;}
	~MyClass(){
		cout<<"Уничтожаем\n";
	}
	friend int comDenom(const MyClass&);//дружественная функция
};
/*
 * Обратите внимание, что функция comDenom()
 * не является функцией-членом какого либо класса.
 */
int comDenom(const MyClass &x){
	/*
	 * Посколько comDenom() дружественная для класса MyClass,
	 * она может непосредственно обращаться к a и b.
	 */
	int max = x.a>x.b?x.a:x.b;
	for(int i=2; i<max; i++){
		if((x.a%i==0) && (x.b%i==0)) {
			return i;
		}
	}
	return 0;
}
int main() {
	MyClass n(18,111);
	int i;
	if((i=comDenom(n))){
		cout<<"Общий знаменатель равен: "<<i<<"\n";
	} else {
		cout<<"Общего знаменателя нет.\n";
	}
	return 0;
}
