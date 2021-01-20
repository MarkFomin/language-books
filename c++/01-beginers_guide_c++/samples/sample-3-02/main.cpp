/* 
	Программа "Магическое число": 1-е усовершенствование.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic; // магическое число
	int guess; // догадка пользователя
	
	magic = rand()%10; // получим случайное число
	
	cout << "Вводите вашу догадку: ";
	cin >> guess;
	
	if(guess == magic) {
		cout << "** Правильно **\n";
	} else {
		cout << "... Жаль, но вы ошиблись.\n";
	}
	
	return 0;
}
