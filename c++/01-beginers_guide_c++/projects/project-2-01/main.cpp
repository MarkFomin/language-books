/*
	Проект 2 - 1
	Разговор с Марсом
*/
#include <iostream>
using namespace std;

int main()
{
	double distance;
	double lightspeed;
	double delay;
	double delay_in_min;
	
	distance = 34000000.0; // 34000000 миль
	lightspeed = 186000.0; // 186000 миль в секунду
	
	delay = distance / lightspeed;
	cout << "Временная задержка при разговоре с Марсом: " << delay << " секунд.\n";
	
	delay_in_min = delay / 60;
	cout << "Это составляет: " << delay_in_min << " минут.\n";
	
	return 0;
}
