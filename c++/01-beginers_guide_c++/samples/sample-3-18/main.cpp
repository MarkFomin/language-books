/* 
	Программа показывает пример работы break.
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	
	// цикл от 0 до 9, не до 100!
	for(t=0; t<100; t++){
		if (t == 10) break;
		cout << t << ' ';
	}
	cout << "\n";
	
	return 0;
}
