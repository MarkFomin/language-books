/*
 * Демонстрация локальной области видимости
 */
#include<iostream>
using namespace std;
void f();
int main(){
	int val=10;
	cout<<"val в main(): "<<val<<"\n";
	f();
	cout<<"val в main(): "<<val<<"\n";
	return 0;
}
void f(){
	int val=88;
	cout<<"val в f(): "<<val<<"\n";
}
