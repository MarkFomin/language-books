/*
	Проект 2 - 3
	Вычисление регулярного платежа по ссуде.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Principal; // начальная сумма ссуды
	double IntRate; // ставка процента по ссуде, например 0.075
	double PayPerYear; // число платежей в год
	double NumYears; // число лет, на которое выдана ссуда
	double Payment; // регулярный платеж
	double number, denom; // временные рабочие переменные
	double b, e; // основание и порядок для вызова функции pow()
	
	cout << "Введите сумму ссуды: ";
	cin >> Principal;
	
	cout << "Введите процентную ставку (например 0.075): ";
	cin >> IntRate;
	
	cout << "Введите число платежей в год: ";
	cin >> PayPerYear;
	
	cout << "Введите число лет: ";
	cin >> NumYears;
	number = IntRate * Principal / PayPerYear;
	
	e = -(PayPerYear * NumYears);
	b = (IntRate / PayPerYear) + 1;
	
	denom = 1 - pow(b, e);
	
	Payment = number / denom;
	
	cout << "Платеж составит " << Payment << "\n";
	
	return 0;
}
