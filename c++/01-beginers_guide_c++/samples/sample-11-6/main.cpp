/*
 * Демонстрация манипуляторов ввода-вывода
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<setprecision(2)<<1000.23<<endl;
	cout<<setw(20)<<"Hello there."<<endl;
	return 0;
}
