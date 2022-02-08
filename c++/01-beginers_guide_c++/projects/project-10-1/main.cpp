/*
 * Проект 10-1
 * Создание класса Truck, производного от Vehicle.
 */
#include<iostream>
using namespace std;
// Объявим класс Vehicle.
class Vehicle {
	// Эти члены закрыты.
	int passengers;//число пассажиров
	int fuelcap;   //ёмкость бензобака в галлонах
	int mpg;       //потребление топлива в милях на галлон
public:
	// Это конструктор для Vehicle.
	Vehicle(int p, int f, int m){
		passengers=p;
		fuelcap=f;
		mpg=m;
	}
	// Вычислить и вернуть дальность пробега.
	int range(){ return mpg*fuelcap; }
	// Функции доступа.
	int get_passengers(){return passengers;}
	int get_fuelcap(){return fuelcap;}
	int get_mpg(){return mpg;}
};
/*
 * Используем Vehicle для создания специализированного 
 * класса Truck.
 */
class Truck : public Vehicle {
	int cargocap;//грузоподъемность в фунтах
public:
	// Это конструктор для Truck.
	Truck(int p, int f, int m, int c):Vehicle(p,f,m){
		cargocap=c;
	}
	// Функция доступа для cargocap.
	int get_cargocap(){return cargocap;}
};
int main(){
	// Сконструируем несколько грузовиков.
	Truck semi(2, 200, 7, 44000);//фургон
	Truck pickup(3, 28, 15, 2000);//пикап
	int dist=252;//расстояние
	cout<<"Фургон может вести "<<semi.get_cargocap()<<" фунтов груза.\n";
	cout<<"Он имеет дальность пробега "<<semi.range()<<" миль.\n";
	cout<<"Пробег в "<<dist<<" миль требует "<<dist/semi.get_mpg()<<" галлонов топлива.\n\n";
	cout<<"Пикап может вести "<<pickup.get_cargocap()<<" фунтов груза.\n";
	cout<<"Он имеет дальность пробега "<<pickup.range()<<" миль.\n";
	cout<<"Пробег в "<<dist<<" миль требует "<<dist/pickup.get_mpg()<<" галлонов топлива.\n";
	return 0;
}
