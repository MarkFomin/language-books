/*
 * Создание различных вариантов функции neg()
 */
#include<iostream>
using namespace std;
int neg(int n);      // neg() для int
double neg(double n);// neg() для double
long neg(long n);    // neg() для long
int main(){
	cout<<"neg(-10): "<<neg(-10)<<"\n";
	cout<<"neg(9L): "<<neg(9L)<<"\n";
	cout<<"neg(11.23): "<<neg(11.23)<<"\n";
	return 0;
}
// neg() для int
int neg(int n){
	return -n;
}
// neg() для double
double neg(double n){
	return -n;
}
// neg() для long
long neg(long n){
	return -n;
}
