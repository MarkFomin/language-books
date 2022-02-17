/*
 * Инициализация памяти.
 */
#include<iostream>
using namespace std;
int main(){
	int *p;
	try {
		p = new int(87);//инициализируем значением 87
	} catch (bad_alloc const&){
		cout<<"Ошибка выделения памяти.\n";
		return 1;
	}
	cout<<"По адресу "<<p<<" находится значение "<<*p<<"\n";
	delete p;
	return 0;
}
