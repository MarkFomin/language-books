/*
 * Пример вторичного выбрасывания исключения.
 */
#include<iostream>
using namespace std;
void Xhandler(){
	try {
		throw "Привет!";// Выбрасывем const char *
	} catch (const char *str) {// Ловим const char *
		cout<<"Поймано const char *: "<<str<<" внутри Xhandler()\n";
		throw;// Вторичное выбрасывание const char * из функции внаружу
	}
}
int main(){
	cout<<"Начало\n";
	try {
		Xhandler();
	} catch (const char *str){
		cout<<"Поймано const char *: "<<str<<" внутри main()\n";
	}
	cout<<"Завершение\n";
	return 0;
}
