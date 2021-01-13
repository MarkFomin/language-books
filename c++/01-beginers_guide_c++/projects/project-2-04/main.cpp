/*
	Проект 2 - 4
	Вычисление простых числе в диапозоне от 1 до 100.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, j;
	bool isprime;
	
	for(i=1; i<=100; i++){
		//if(i % 2 != 0) continue;
		isprime = true;
		for(j=2; j<i/2; j++){
			if( (i % j) == 0) {
				isprime = false;
			}
		}
		if(isprime) {
			cout << i << " простое.\n";
		}
	}
	return 0;
}
