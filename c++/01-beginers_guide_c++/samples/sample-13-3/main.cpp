/*
 * Теперь эта программа будет работать правильно.
 */
#include<iostream>
using namespace std;
#define EVEN(a) (a)%2==0?1:0
int main(){
	if(EVEN(9+1)) cout<<"четно\n";
	else cout<<"нечетно\n";
	return 0;
}
