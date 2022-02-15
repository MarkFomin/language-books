/*
 * Ипользование группы предложений catch.
 */
#include<iostream>
using namespace std;
// Можно ловить исключения разных типов.
void Xhandler(int test){
	try {
		if(test) throw test;              //выбрасываем int
		else throw "Значение равно нулю.";//выбрасываем const char*
	} catch (int i){
		cout<<"Поймали! Исключение #:"<<i<<"\n";
	} catch (const char *str){
		cout<<"Поймали строку: "<<str<<"\n";
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
