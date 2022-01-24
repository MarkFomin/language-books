/*
 * Возврат значения типа double
 */
#include<iostream>
using namespace std;
//Используем данные типа double
double box(double length, double width, double height);

int main(){
	double answer;
	
	answer = box(10.1, 11.2, 3.3); //присвоим возвращаемое значение
	cout << "Объем равен: " << answer << "\n";
	return 0;
}
//Этот вариант box() использует значения типа double
double box(double length, double width, double height){
	return length*width*height;
}
