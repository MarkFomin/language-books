/*
 * Функция с двумя родовыми типами.
 */
#include<iostream>
using namespace std;
template <class Type1, class Type2> void myfunc(Type1 x, Type2 y){
	cout<<x<<" "<<y<<"\n";
}
int main(){
	myfunc(10, "hi");
	myfunc(0.23, 10L);
	return 0;
}
