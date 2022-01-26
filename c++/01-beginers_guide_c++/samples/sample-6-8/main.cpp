/*
 * Перегрузим функцию трижды.
 */
#include<iostream>
using namespace std;
void f(int i);       // параметр типа int
void f(int i, int j);// два параметра типа int
void f(double k);    // один параметр типа doubles
int main(){
	f(10);// вызов f(int)
	f(10,20);// вызов f(int, int)
	f(12.23);// вызов f(double)
	return 0;
}
void f(int i){
	cout<<"В f(int) i равно: "<<i<<"\n";
}
void f(int i, int j){
	cout<<"В f(int, int) i равно: "<<i<<", j равно: "<<j<<"\n";
}
void f(double k){
	cout<<"В f(double) k равно: "<<k<<"\n";
}
