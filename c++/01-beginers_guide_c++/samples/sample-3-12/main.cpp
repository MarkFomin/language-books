/* 
	Тело цикла может быть пустым.
*/

#include <iostream>
using namespace std;

int main()
{
	int i;
	int sum = 0;
	
	//суммируем числа от 1 до 10
	for(i = 1; i <= 3; sum += i++) ;
	cout << "Сумма равна " << sum << "\n";
	
	return 0;
}
