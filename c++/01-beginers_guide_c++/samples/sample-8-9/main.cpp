/*
 * Создание всроенных функций внутри класса.
 */
#include<iostream>
using namespace std;
class cl {
	int i;// закрыта по умолчанию
public:
	// Автоматическое создание встроенных функций.
	int get_i(){return i;}
	void put_i(int j){i=j;}
};
int main(){
	cl s;
	s.put_i(10);
	cout<<s.get_i()<<"\n";
}
