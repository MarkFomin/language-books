/* 
	Простой компьютеризованный телефонный справочник.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int i;
	char str[80];
	char numbers[10][80] = {
		"Том", "555-3322",
		"Мэри", "555-8976",
		"Джон", "555-1037",
		"Рейчел", "555-1400",
		"Шерри", "555-8873"
	};
	
	cout << "Введите имя: ";
	cin >> str;
	
	for(i=0; i<10; i+=2){
		if(!strcmp(str, numbers[i])){
			cout << "Телефон " << numbers[i+1] << "\n";
			break;
		}
	}
	if(i==10) cout << "Не найдено.\n";
	
	return 0;
}
