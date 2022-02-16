/*
 * Пример родовой функции.
 */
#include<iostream>
using namespace std;
// Это родовая функция.
template <class X> void swapargs(X &a, X &b){
	X temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int i=10, j=20;
	float x=10.1, y=23.3;
	char a='x', b='z';
	cout<<"Исходные i, j: "<<i<<" "<<j<<"\n";
	cout<<"Исходные x, y: "<<x<<" "<<y<<"\n";
	cout<<"Исходные a, b: "<<a<<" "<<b<<"\n";
	swapargs(i,j);//обменяем целые
	swapargs(x,y);//обменяем значения с плавающей точкой
	swapargs(a,b);//обменяем символы
	cout<<"После обмена i, j:"<<i<<" "<<j<<"\n";
	cout<<"После обмена x, y:"<<x<<" "<<y<<"\n";
	cout<<"После обмена a, b:"<<a<<" "<<b<<"\n";
	return 0;
}
