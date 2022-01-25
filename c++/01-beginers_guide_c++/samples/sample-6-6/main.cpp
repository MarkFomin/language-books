/*
 * Возврат сслыки на элемент массива.
 */
#include<iostream>
using namespace std;
double &change_it(int i);// возвращает ссылку
double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};
int main(){
	int i;
	cout<<"Вот исходные значения: ";
	for(i=0;i<5;i++){
		cout<<vals[i]<<" ";
	}
	cout<<"\n";
	change_it(1)=5298.23;// изменим 2-й элемент
	change_it(3)=-98.0;  // изменим 4-й элемент
	cout<<"Вот измененные значения: ";
	for(i=0;i<5;i++){
		cout<<vals[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

double &change_it(int i){
	return vals[i];// возвращает сслыку на i-элемент
}
