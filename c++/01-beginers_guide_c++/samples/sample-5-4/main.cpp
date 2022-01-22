/*
 * Демонстрация условного выхода из функции
 */
#include<iostream>
using namespace std;

void power(int base, int exp);

int main(){
	power(10, 2);
	power(10, -2);
	return 0;
}
//Возведение целова числа в целую положительную степень.
void power(int base, int exp){
	int i;
	if(exp<0) return; /* Не умею работать с отрицательными 
											показателями */
	i=1;
	for(;exp;exp--) i=base*i;
	cout<<"Ответ: "<<i<<"\n";
}
