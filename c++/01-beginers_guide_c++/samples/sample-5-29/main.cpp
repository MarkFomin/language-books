/*
 * Напишите рекурсивную функцию, которая выводит числа от 1 до 10. 
 * Продемонстрируйте ее использование в программе.
 */
#include<iostream>
using namespace std;
void printNums(int cur=0);
int main(){
	printNums();
	return 0;
}
void printNums(int cur){
	cout<<" "<<cur;
	if(cur<10){
		printNums(cur+1);
	}
	if(cur==10){
		cout<<"\n";
	}
}
