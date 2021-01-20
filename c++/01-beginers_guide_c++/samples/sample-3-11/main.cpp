/* 
	Цикл без приращения.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int x;
	
	for(x = 0; x != 123; ) {
		cout << "Введите число: ";
		cin >> x;
	}
	
	return 0;
}
