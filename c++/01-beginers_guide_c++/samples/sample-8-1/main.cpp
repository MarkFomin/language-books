/*
 * Программа использующая класс Vehicle
 */
#include<iostream>
using namespace std;
//Объявим класс Vehicle
class Vehicle {
public:
	int passengers;// число пассажиров
	int fuelcap;   // емкость бензобака в галлонах
	int mpg;       // потребеление топлива в милях на галон
};
int main(){
	Vehicle minivan;// Создадим объект класса Vehicle.
	int range;
	// Присвоим значения полям объекта minivan (фургон).
	minivan.passengers=7;
	minivan.fuelcap=16;
	minivan.mpg=21;
	// Вычислим дальность пробега для полного бака.
	range=minivan.fuelcap*minivan.mpg;
	cout<<"Фургон может везти "<<minivan.passengers<<
	" на расстояние "<<range<<"\n";
	return 0;
}
