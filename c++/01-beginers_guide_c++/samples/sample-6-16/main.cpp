/*
 * Еще пример неоднозначности при перегрузке функций.
 */
#include<iostream>
using namespace std;
int myfunc(int i);
int myfunc(int i, int j=1);
int main(){
	cout<<myfunc(4,5)<<"\n";// однозначно
	//cout<<myfunc(10)<<"\n";// Ошибка, неоднозначность!
	int (*ptr)(int) = myfunc;
	cout<<(*ptr)(10)<<"\n";
	cout<<ptr(15)<<"\n";
	return 0;
}
int myfunc(int i){
	return i;
}
int myfunc(int i, int j){
	return i*j;
}
