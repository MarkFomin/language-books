/*
 * Локальная переменная инициализируется каждый раз
 * при входе ее блок
 */
#include<iostream>
using namespace std;
void f();
int main(){
	for(int i=0;i<3;i++) f();
}
// num инициализируется каждый раз при вызове f()
void f(){
	int num=99;
	cout<<num<<"\n";
	num++;// результат этого действия не сохраняется
}
