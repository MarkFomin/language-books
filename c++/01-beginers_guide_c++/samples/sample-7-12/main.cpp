/*
 * Напишите программу, содержащую функцию с именем counter(),
 * которая просто отсчитывает число своих вызовов. Функция долж ­
 * на возвращать текущее число вызовов.
 */
#include<iostream>
using namespace std;
int counter();
int main(){
	for(int i=0;i<10;i++) {
		cout<<"Функция вызвана раз: "<<counter()<<"\n";
	}
	return 0;
}
int counter(){
	static int count=0;
	return ++count;
}
