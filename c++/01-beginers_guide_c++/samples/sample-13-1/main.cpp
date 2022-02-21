/*
 * Использование макроса подобного функции.
 */
#include<iostream>
using namespace std;
#define MIN(a,b) ( ((a)<(b))?a:b )
int main(){
	int x,y;
	x=10;
	y=20;
	cout<<"Меньшее значение: "<<MIN(x,y)<<"\n";
	return 0;
}
