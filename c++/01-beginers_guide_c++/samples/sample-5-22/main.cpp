/*
 * Использование определения функции в качестве ее прототипа.
 */
#include<iostream>
using namespace std;
// Определим является ли число четным.
bool isEven(int num){
	if(!(num%2)) return true; //num четно
	return false;
}
int main(){
	if(isEven(4)) cout<<"4 четно\n";
	if(isEven(3)) cout<<"это не будет выведено\n";
	return 0;
}
