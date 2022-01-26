/*
 * Демонстрация агрументов с инициализацией по умолчанию.
 */
#include<iostream>
using namespace std;
void myfunc(int x=0, int y=100);
int main(){
	myfunc(1,2);
	myfunc(10);
	myfunc();
	return 0;
}
void myfunc(int x, int y){
	cout<<"x: "<<x<<", y: "<<y<<"\n";
}
