/*
 * Это пример использует два родовых типа данных
 * в определении класса.
 */
#include<iostream>
using namespace std;
template <class T1, class T2> class MyClass {
	T1 i;
	T2 j;
public:
	MyClass(T1 a, T2 b){
		i=a; j=b;
	}
	void show(){
		cout<<i<<" "<<j<<"\n";
	}
};
int main(){
	MyClass<int, double> ob1(10, 0.23);
	MyClass<char, const char *> ob2('X',"Это проврка.");
	ob1.show();//вывести int, double
	ob2.show();//вывести char, const char*
	return 0;
}
