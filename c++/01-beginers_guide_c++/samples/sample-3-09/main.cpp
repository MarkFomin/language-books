/* 
	Цикл, выполняемый в отрицательном направлении.
*/

#include <iostream>
using namespace std;

int main()
{
	int i;
	
	for(i = 50; i >= -50; i = i-10) cout << i << " ";
	cout << "\n";
	
	return 0;
}
