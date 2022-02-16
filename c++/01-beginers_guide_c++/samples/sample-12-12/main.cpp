/*
 * Специализация родовой функции.
 */
#include<iostream>
using namespace std;
template <class X> void swapargs(X &a, X &b){
	X temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Внутри шаблонной функции swapargs().\n";
}
//Эта функция замещает родовой вариант swapargs() для int.
void swapargs(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Внутри специализации swapargs() для int.\n";
}
int main(){
	int i=10, j=20;
	float x=10.1, y=23.3;
	char a='x', b='z';
	cout<<"Исходные i, j: "<<i<<" "<<j<<"\n";
	cout<<"Исходные x, y: "<<x<<" "<<y<<"\n";
	cout<<"Исходные a, b: "<<a<<" "<<b<<"\n";
	swapargs(i,j);//вызывается явно перегруженная swapargs()
	swapargs(x,y);//вызывается родовая swapargs()
	swapargs(a,b);//вызывается родовая swapargs()
	cout<<"После обмена i, j: "<<i<<" "<<j<<"\n";
	cout<<"После обмена x, y: "<<x<<" "<<y<<"\n";
	cout<<"После обмена a, b: "<<a<<" "<<b<<"\n";
	return 0;
}
