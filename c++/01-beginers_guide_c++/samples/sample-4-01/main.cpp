/* 
	Программа, которая заполняет массив sample числами от 0 до 9.
*/

#include <iostream>
using namespace std;

int main()
{
	int sample[10]; // резервирование места под 10 элементов типа int
	
	int t;
	
	// заполним массив
	for(t=0; t<10; t++) sample[t] = t;
	
	// выведем массив
	for(t=0; t<10; t++) {
		cout << "Это sample[" << t << "]: " << sample[t] << "\n";
	}
		
	return 0;
}
