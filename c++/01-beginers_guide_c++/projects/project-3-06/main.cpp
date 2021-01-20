/*
	Проект 3 - 6
	Изменение регистра букв.
*/
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int changes = 0;
	
	cout << "Введите точку для завершения.\n";
	
	do {
		cin >> ch;
		if(ch>='a' && ch<='z'){
			ch -= (char)32;
			changes++;
			cout << ch;
		} else if(ch>='A' && ch<='Z'){
			ch += (char)32;
			changes++;
			cout << ch;
		}
	} while (ch!='.');
	
	cout << "\nИзменение регистра: " << changes <<"\n";
	
	return 0;
}
