/*
 * Использование параметра-ссылки.
 */
#include<iostream>
using namespace std;
void f(int &i);// здесь i является параметром-ссылкой
int main(){
	int val=1;
	cout<<"Старое значение val: "<<val<<"\n";
	f(val);// передадим f() адрес val
	cout<<"Новое значение val: "<<val<<"\n";
	return 0;
}
void f(int &i){
	i=10;// модифицирует передаваемый аргумент
}
