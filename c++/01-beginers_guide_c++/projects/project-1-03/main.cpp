/*
	Проект 1 - 3
	Таблица соответствия веса на Земле и на Луне.
*/
#include <iostream>
using namespace std;

int main()
{
	double earthweight; // содержит вес в фунтах на Земле
	double moonweight; // содержит вес в фунтах на Земле
	int counter;
	
	counter = 0;
	
	for(earthweight=1.0; earthweight <= 100.0; earthweight++) {
		moonweight = earthweight * 0.17; //преобразуем в граммы
		cout << earthweight << " земных фунтов эквивалентно " << 
						moonweight << " лунным фунтам.\n";
		
		counter++;
		//После каждых 25 строк вывести пустую строку
		if(counter == 25){
			cout << "\n"; //вывод пустой строки
			counter = 0; //сброс счетчика строк
		}
	}
	
	return 0;
}
