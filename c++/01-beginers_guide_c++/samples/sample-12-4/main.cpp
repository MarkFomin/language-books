/*
 * Блок try может быть локалозован в функции.
 */
#include<iostream>
using namespace std;
// try/catch переустанавливается при каждом входе в функцию
void Xhandler(int test){
	try {
		if(test) throw test;
	} catch (int i) {
		cout<<"Помайли! Исключение #:"<<i<<"\n";
	}
}
int main(){
	cout<<"Начало\n";
	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);
	cout<<"Завершение\n";
	return 0;
}
