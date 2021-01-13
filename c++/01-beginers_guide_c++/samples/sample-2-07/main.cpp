/* 
	Демонстрация использования оператора %.
*/

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	x = 10;
	y = 3;
	
	cout << x << " / " << y << " равно " << x / y << " с остатком " << x % y << "\n";
	
	x = 1;
	y = 2;
	cout << x << " / " << y << " равно " << x / y << "\n" <<
		x << " % " << y << " равно " << x % y << "\n";
	
	return 0;
}
