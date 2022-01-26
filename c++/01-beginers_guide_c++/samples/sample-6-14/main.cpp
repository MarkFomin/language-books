/*
 * Неоднозначность при перегрузке
 */
#include<iostream>
using namespace std;
float myfunc(float i);
double myfunc(double i);
int main(){
	//одназначно, вызов myfunc(double)
	cout<<myfunc(10.1)<<"\n";
	//cout<<myfunc(10)<<"\n";// Ошибка!
	cout<<myfunc(10.0F)<<"\n";
	return 0;
}
float myfunc(float i){
	return i;
}
double myfunc(double i){
	return -i;
}
