/* 
	Программа, которая выводит на экран четный числа 0 до 100.
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	
	for(x=0; x <= 100; x++) {
		if( x % 2 ) continue;
		cout << x << ' ';
	}
	cout << "\n";
		
	return 0;
}
