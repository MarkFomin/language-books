/*
 * Ипользование глобальное переменной
 */
#include<iostream>
using namespace std;
void func1();
void func2();
int count=0; // это глобальная переменная
int main(){
	int i; // это локальная переменная
	for(i=0;i<10;i++){
		count=i*2;
		func1();
	}
	cout<<"\n";
	return 0;
}
void func1(){
	cout<<"count: "<<count<<"\n";// обращение к глобальной переменной
	func2();
}
void func2(){
	int count;// это локальная переменная
	for(count=0;count<3;count++) cout<<".";
}
