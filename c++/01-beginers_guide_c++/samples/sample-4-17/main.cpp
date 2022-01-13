/* 
 Демонстрация работы со строковыми константами.*
*/

#include <iostream>
using namespace std;

int main()
{
	char const *ptr;
	
	ptr = "Указатели увеличивают возможности C++.\n";
	
	cout << ptr;
	return 0;
}
