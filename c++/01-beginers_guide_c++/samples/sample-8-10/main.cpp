/*
 * Определяем конструктор, деструктор
 * и функции range(), как встроенные.
 */
#include<iostream>
using namespace std;
// Объявляем класс Vehicle.
class Vehicle{
	// Эти члены теперь закрыты.
	int passengers;// число пассажиров
	int fuelcap;   // ёмкость бензобака в галлонах
	int mpg;       // потребление топлива в милях на галлон
public:
	// Это конструктор для Vehicle.
	Vehicle(int p, int f, int m){
		passengers=p;
		fuelcap=f;
		mpg=m;
	}
	// Вычислим и вернем дальность пробега.
	int range(){ return fuelcap*mpg; }
	// Функции доступа
	int get_passengers(){ return passengers; }
	int get_fuelcap(){ return fuelcap; }
	int get_mpg(){ return mpg; }
};
int main(){
	// Передадим значения конструктору Vehicle.
	Vehicle minivan(7, 16, 21);
	Vehicle sportcar(2, 14, 12);
	int range1, range2;
	// Вычислим дальность пробега при полном баке.
	range1=minivan.range();
	range2=sportcar.range();
	cout<<"Фургон может вести "<<minivan.get_passengers()<<" на расстрояние "<<range1<<"\n";
	cout<<"Спортивный автомобиль может вести "<<sportcar.get_passengers()<<" на расстояние "<<range2<<"\n";
	return 0;
}
