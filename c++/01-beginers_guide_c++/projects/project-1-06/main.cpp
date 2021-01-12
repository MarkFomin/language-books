/*
	Проект 1 - 6
	Среднее абсолютных значений 5 чисел
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	double avg, val;
	
	avg = 0.0;
	for(i=0; i<5; i++){
		cout << "Введите значение: ";
		cin >> val;
		
		avg = avg + abs(val);
	}
	avg = avg / 5;
	
	cout << "Среднее абсолютных значений: " << avg << "\n";
	
	return 0;
}
