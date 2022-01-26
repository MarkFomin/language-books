/*
 * Другой пример неоднозначности при перегрузке.
 */
#include<iostream>
using namespace std;
unsigned char myfunc(unsigned char i);
char myfunc(char i);
int main(){
	cout<<myfunc('c')<<"\n";// здесь вызывается myfunc(char)
	//cout<<myfunc(88)<<"\n"; //Ошибка, неоднозначность!
	cout<<myfunc((unsigned char)88)<<"\n";//здесь вызывается myfunc(unsigned char)
	return 0;
}
unsigned char myfunc(unsigned char i){
	return i-1;
}
char myfunc(char i){
	return i+1;
}
