/*
 * Обращение к статической переменной класса с указанием имени класса.
 */
#include<iostream>
using namespace std;
class Test {
public:
	static int num;
	void shownum(){
		cout<<num<<"\n";
	}
};
int Test::num;//определим тип
int main(){
	Test a,b;
	// Установим num, указав имя ее класса.
	Test::num=100;
	a.shownum();//выводит 100
	b.shownum();//выводит 100
	// Установим num, указав имя объекта.
	a.num=200;
	a.shownum();//выводит 200
	b.shownum();//выводит 200
	return 0;
}
