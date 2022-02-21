/*
 * Пример использования оператора ## препроцессора.
 */
#include<iostream>
using namespace std;
#define concat(a,b) a ## b
int main(){
	int xy=11;
	cout<<concat(x,y)<<"\n";
	return 0;
}
