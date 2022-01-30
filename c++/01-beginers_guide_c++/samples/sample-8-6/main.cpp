/*
 * Добавление конструктора в класс транспортных средств.
 */
#include<iostream>
using namespace std;
// Объявим класс Vehicle.
class Vehicle {
public:
	// Это конструтор для Vehicle.
	Vehicle(int p, int f, int m);
	int passengers;//число пассажиров
	int fuelcap;  //ёмкость бензобака в галлонах 
	int mpg;      //потребление топлива в милях на галлон
	int range();  //вычислить и вернуть дальность пробега
};
// Реализация конструтора Vehicle.
Vehicle::Vehicle(int p, int f, int m){
	passengers=p;
	fuelcap=f;
	mpg=m;
}
// Реализация функции-члена range().
int Vehicle::range(){
	return fuelcap*mpg;
}
int main(){
	// Передадим значение конструтору Vehicle.
	Vehicle minivan(7, 16, 21);
	Vehicle sportcar(2, 14, 12);
	int range1, range2;
	// Вычислим дальность пробега для полного бензобака.
	range1 = minivan.range();
	range2 = sportcar.range(); 
	cout<<"Фургон может вести "<<minivan.passengers<<" на расстояние "<<range1<<"\n";
	cout<<"Спортивный автомобиль может вести "<<sportcar.passengers<<" на расстояние "<<range2<<"\n";
	return 0;
}
