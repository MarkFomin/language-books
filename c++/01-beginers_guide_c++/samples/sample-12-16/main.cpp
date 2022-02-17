/*
 * Демонстрация new и delete
 */
#include<iostream>
using namespace std;
int main(){
	int *p;
	try {
		p = new int;//выделение места в памяти под int
	} catch(bad_alloc const&e) {
		cout<<"Отказ в выделении памяти\n";
		return 1;
	}
	*p=100;
	cout<<"По адресу "<<p<<" находится значение "<<*p<<"\n";
	delete p;
	return 0;
}
