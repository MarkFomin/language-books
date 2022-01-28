/*
 * Демонстрация работы с перечислимым типом.
 */
#include<iostream>
using namespace std;
enum transport { car, truck, airplane, train, boat };
char name [][40]{
	"car [автомобиль]",
	"truck [грузовик]",
	"airplane [самолет]",
	"train [поезд]",
	"boat [лодка]"
};
int main(){
	transport how;
	how = car;
	cout << name[how] << "\n";
	how = airplane;
	cout << name[how] << "\n";
	how = train;
	cout << name[how] << "\n";
	return 0;
}
