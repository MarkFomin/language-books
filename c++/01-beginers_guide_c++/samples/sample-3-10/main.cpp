/* 
	Цикл выполняется, пока случайное число не окажется
	больше чем, 20000.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	int r;
	
	for(i = 0; r <= 20000; i++) r = rand();
	cout << " Число равно " << r << ". Оно было получено на шаге " << i << ".\n";
	
	return 0;
}
