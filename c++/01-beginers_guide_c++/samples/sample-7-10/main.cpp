/*
 * Демонстрация оператора НЕ.
 */
#include<iostream>
using namespace std;
void show_binary(unsigned int u);
int main(){
	unsigned int u;
	cout<<"Введите число между 0 и 255: ";
	cin>>u;
	cout<<"Вот двоичный код числа: ";
	show_binary(u);
	cout<<"Вот обратный код числа: ";
	show_binary(~u);
	return 0;
}
void show_binary(unsigned int u){
	for(int t=128;t>0;t/=2){
		if(u&t) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
}
