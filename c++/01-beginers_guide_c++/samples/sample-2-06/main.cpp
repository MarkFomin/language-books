/* 
	Демонстрация динамической инициализации.
*/

#include <iostream>
using namespace std;

int main()
{
	double radius = 4.0, height = 5.0;
	
	// динамически инициализируем переменную volume
	double volume = 3.14 * radius * radius * height;
	cout << "Объем равен " << volume << "\n";
	
	return 0;
}
