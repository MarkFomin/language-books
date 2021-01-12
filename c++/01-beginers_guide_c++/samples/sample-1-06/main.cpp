/*
	Эта программа иллюстрирует различие
	типов int и double.
*/

#include <iostream>
using namespace std;

int main()
{
	int ivar; // объявление переменной типа int
	double dvar; // объявление переменной c плавающей точкой
	
	ivar = 100; // присвоить ivar значение 100
	
	dvar = 100.0; // присвоить ivar значение 100.0
	
	cout << "Исходное значение ivar: " << ivar << "\n";
	cout << "Исходное значение dvar: " << dvar << "\n";
	
	cout << "\n"; //вывести пустую строку
	
	// теперь разделим обе переменные на 3
	ivar=ivar / 3;
	dvar=dvar / 3.0;
	
	cout << "ivar после деления: " << ivar << "\n";
	cout << "dvar после деления: " << dvar << "\n";
	
	return 0;
}
