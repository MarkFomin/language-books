/*
 * Программа использующая класс Vehicle.
 */
#include<iostream>
using namespace std;
// Объявим класс Vehicle.
class Vehicle {
public:
	int passengers;//число пассажиров
	int fuelcap;   //емкость бензобака в галоннах
	int mpg;       //потребление топлива в милях на галлон
	int range();   //вычислить и вернуть дальность пробега
};
//Реализации функции-члена range().
int Vehicle::range(){
	return fuelcap*mpg;
}
int main(){
	Vehicle minivan; //cоздадим объект класса Vehicle.
	Vehicle sportcar;//создадим другой объект
	int range1, range2;
	//Присвоим значения полям minivan.
	minivan.passengers=7;
	minivan.fuelcap=16;
	minivan.mpg=21;
	//Присвоим значения полям sportcar.
	sportcar.passengers=2;
	sportcar.fuelcap=14;
	sportcar.mpg=12;
	//Вычислим дальность пробега для полного бензобака.
	range1=minivan.range();
	range2=sportcar.range();
	cout<<"Фургон может вести "<<minivan.passengers<<" на расстояние "<<range1<<"\n";
	cout<<"Спортивный автомобиль может вести "<<sportcar.passengers<<" на расстояние "<<range2<<"\n";
	return 0;
}
