/*
 * Пример использования оператора # препроцессора.
 */
#include<iostream>
using namespace std;
#define mkstr(s) # s
int main(){
	cout<<mkstr("Мне нравится C++")<<"\n";
	return 0;
}
