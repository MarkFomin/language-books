/* 
	Пример работы с указателем
*/

#include <iostream>
using namespace std;

int main()
{
	int total;
	int *ptr;
	int val;
	
	total = 3200; // присвоим значение total 3200
	ptr = &total; // получим адрес total
	val = *ptr; // получим значение по этому адресу
	
	cout << "total равно: " << val << "\n";
	
	return 0;
}
