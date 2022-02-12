/*
 * Создание манипулятора ввода.
 */
#include<iostream>
#include<iomanip>
using namespace std;
istream &prompt(istream &stream){
	cin>>hex;
	cout<<"Введите число в шеснадцатеричном формате:\n";
	return stream;
}
int main(){
	int i;
	cin>>prompt>>i;
	cout<<i<<endl;
}
