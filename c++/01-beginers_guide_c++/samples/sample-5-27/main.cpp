/*
 * Создайте функцию byThrees(), которая возвращает последователь­
 * ность чисел, каждое из которых на 3 больше предыдущего. Начни­
 * те последовательность с 0. Тогда первые пять чисел, возвращенных
 * функцией byThrees(), будут 0, 3, 6, 9 и 12. Создайте другую функ­цию,
 * reset(), которая заставит byThrees() начать создавать новую
 * последовательность снова с 0. Продемонстрируйте использование
 * этих функции в программе.
 */
#include<iostream>
using namespace std;
int num=0;
void reset();
int byThrees();
int main(){
	for(int i=0;i<2;i++){
		for(int j=0; j<5; j++){
			cout<<" "<<byThrees();
		}
		cout<<"\n";
		reset();
	}
	return 0;
}
void reset(){
	num=0;
}
int byThrees(){
	int ret = num;
	num+=3;
	return ret;
}
