/* 
	Пример использования gets() для ввода строки с клавиатуры.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char str[80];
	
	cout << "Введите строку: ";
	//gets(str); - утарело, пробуем fgets()
	fgets(str, sizeof(str), stdin);
	cout << "Вот ваша строка:" << str << "\n";
	
	return 0;
}
