/*
	Проект 3 - 5
	Использование цикла для генерации прогрессии
	1 2 4 8 16 ...
*/
#include <iostream>
using namespace std;

int main()
{
	
	for (int i=1; i<100; i+=i) {
		cout << i << ' ';
	}
	cout << "\n";
	
	return 0;
}
