/*
 * Создадим различные варивнты min().
 */
#include<iostream>
using namespace std;
int min(int a, int b);   // min() для int
char min(char a, char b);       // min() для char
int *min(int *a, int *b);// min() для *int
int main(){
	int i=10, j=22;
	cout<<"min('X', 'a'): "<<min('X','a')<<"\n";
	cout<<"min(9,3): "<<min(9,3)<<"\n";
	cout<<"*min(&i,&j): "<<*min(&i,&j)<<"\n";
	return 0;
}
// min() для int. Возвращает меньшее значение.
int min(int a, int b){
	if(a<b)return a;
	return b;
}
// min() для chat - игнорирование регистра букв.
char min(char a, char b){
	if(tolower(a)<tolower(b)) return a;
	return b;
}
/*
 * min() для указателей на int.
 * Сравнивает значения и возвращает указатель на меньшее
 * значение.
 */
int *min(int *a, int *b){
	if(*a<*b)return a;
	return b;
}
