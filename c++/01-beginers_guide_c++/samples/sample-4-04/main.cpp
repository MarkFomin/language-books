/* 
	Пример использования cin для ввода строки с клавиатуры.
*/

#include <iostream>
using namespace std;

int main()
{
	char str[80];
	
	cout << "Введите строку: ";
	cin >> str;
	cout << "Вот ваша строка:" << str << "\n";
	
	return 0;
}
