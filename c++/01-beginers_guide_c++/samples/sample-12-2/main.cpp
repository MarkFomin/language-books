/*
 * Эта программа работать не будет.
 */
#include<iostream>
using namespace std;
int main(){
	cout<<"Начало\n";
	try {//начало блока try
		cout<<"Внутри блока try\n";
		throw 99;//выборсим ошибку
		cout<<"Это выполняться не будет\n";
	} catch(double i){//не будет работать для исключения int
		cout<<"Поймано исключение - значение равно: "<<i<<"\n";
	}
	cout<<"Завершение\n";
	return 0;
}
