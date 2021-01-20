/*
	Проект 3 - 4
	Посчитаем точки.
*/
#include <iostream>
using namespace std;

int main()
{
	
	char ch;
	int periods = 0;
	
	cout << "Введите '$' для завершения.\n";
	
	do {
		cin >> ch;
		if (ch == '.') periods++;
	} while (ch != '$');
	
	cout << "Точки: " << periods << "\n";
	
	return 0;
}
