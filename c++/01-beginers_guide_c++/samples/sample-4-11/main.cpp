/* 
	Эта программа будет работать неправильно.
*/

#include <iostream>
using namespace std;

int main()
{
	double x, y;
	int *p;
	
	x = 123.23;
	p = (int*) &x; // ипользуем привидение типа для присваения
	               // значения double * переменной типа int *
	
	y = *p;            // к чему это приведет?
	cout << y << "\n"; // что здесь будет выведено на экран?
	
	return 0;
}
