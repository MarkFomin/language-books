/*
	Интерактивная программа, вычисляющая
	площадь прямоугольника.
*/

#include <iostream>
using namespace std;

int main()
{
	int length; //объявляение переменной
	int width; //объявляение другой переменной
	cout << "Введите длину: ";
	cin >> length; //ввод длинны
	cout << "Введите ширину: ";
	cin >> width; //ввод ширины
	cout << "Площадь равна ";
	cout << length*width; //вывод площади
	cout << "\n";
	
	return 0;
}
