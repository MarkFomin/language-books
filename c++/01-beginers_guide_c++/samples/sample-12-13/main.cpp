/*
 * Простой родовой класс.
 */
#include<iostream>
using namespace std;
template <class T> class MyClass {
	T x, y;
public:
	MyClass(T a, T b){
		x=a;
		y=b;
	}
	T div(){ return x/y; }
};
int main(){
	// Создание варианта MyClass для double.
	MyClass<double> d_ob(10.0,3.0);
	cout<<"деление чисел типа double: "<<d_ob.div()<<"\n";
	// Создание варианта MyClass для int.
	MyClass<int> i_ob(10,3);
	cout<<"деление чисел типа int: "<<i_ob.div()<<"\n";
	return 0;
}
