/*
	Проект 1 - 5
	Преобразование юпитерианских лет в земные.
*/
#include <iostream>
using namespace std;

int main()
{
	double e_year; // содержит земные года
	double j_year; // содержит юпитерианские года
	
	cout << "Введите число лет на Юпитере: ";
	cin >> j_year;
	e_year = j_year * 12.0;
	cout << "Эквивалентное число лет на Земле: " << e_year << "\n";
	
	return 0;
}
