/*
 * Эта программа использует прототип функции для
 * активизации строгой проверки типов.
 */
#include<iostream>
using namespace std;
void sqr_it(int *i);// прототип
int main(){
	int x;
	x=10;
	//sqr_it(x);// Ошибка! Несоответствие типов!
	sqr_it(&x);
	cout<<x<<"\n";
	return 0;
}
void sqr_it(int *i){
	*i=*i * *i;
}
