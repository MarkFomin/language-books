/* 
	Объявление переменной управления циклом внутри 
	предложения for.
*/

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int fact = 1;
	
	//суммируем числа от 1 до 10
	for(int i = 1; i <= 5; i++){
		sum +=i; // i известна всюду внутри цикла
		fact *= i;
	}
	// однако здесь i неизвестна
	cout << "Сумма равна " << sum << "\n";
	cout << "Фактриал равен " << fact << "\n";
	
	return 0;
}
