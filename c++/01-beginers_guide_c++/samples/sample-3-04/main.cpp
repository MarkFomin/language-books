/* 
	Программа "Магическое число": 2-е усовершенствование.
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
		cout << guess << " и есть магическое число.\n";
	} else {
		cout << "... Жаль, но вы ошиблись.\n";
		if (guess > magic) {
			cout << " Ваше число слишком велико.\n";
		} else {
			cout << " Ваше число слишком мало.\n";
		}
	}
	
	return 0;
}
