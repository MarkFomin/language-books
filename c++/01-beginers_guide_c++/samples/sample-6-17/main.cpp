/*
 * Создайте void-функцию с именем round(), которая округляет значе­
 * ние своего аргумента типа double до ближайшего целого значения.
 * Пусть round() использует параметр-ссылку и возвращает округлен­
 * ный результат через этот параметр. Продемонстрируйте вызов
 * round() в программе. Для решения этой задачи вам понадобится
 * функция modf() из стандартной библиотеки. Она имеет такой про­
 * тотип:
 * 	double modf(double num, double *i);
 * Функция modf() разлагает num на целую и дробную части. Она воз-
 * ­вращает дробную часть и помещает целую часть в переменную, на
 * которую указывает i. Функция требует заголовок <cmath>.
 */
#include<iostream>
#include<math.h>
using namespace std;
void myRound(double &num);
int main(){
	double num=-2.5111;
	cout<<"Округление до большего числа "<<num;
	myRound(num);
	cout<<" равно: "<<num<<"\n";
}
void myRound(double &num){
	double i, f;
	f = modf(num, &i);
	num = i;
	if(f>=0.5) num++;
}
