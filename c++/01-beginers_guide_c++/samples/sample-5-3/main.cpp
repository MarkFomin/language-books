/*
 *  Использавание предложения return
 */
#include<iostream>
using namespace std;

void f();

int main(){
	cout<<"Перед вызовом\n";
	f();
	cout<<"После вызова\n";
	return 0;
}

//Функция void, использующая return.
void f(){
	cout<<"Внутри f()\n";
	return; //Возврат в вызывающий код
	cout<<"Это выводиться не будет.\n";
}
