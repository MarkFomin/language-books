/* 
	Использование значения value для управления
	предложением if.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "Введите делимое: ";
	cin >> a;
	
	cout << "Введите делитель: ";
	cin >> b;
	
	if(b){
		cout << "Результат: " << a / b << "\n";
	} else {
		cout << "Деление на ноль недопустимо.\n";
	}
	
	return 0;
}
