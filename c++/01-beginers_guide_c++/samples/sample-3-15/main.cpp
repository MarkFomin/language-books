/* 
	Эта программа не допускает вывод строк 
	длиннее 80 символов.  
*/

#include <iostream>
using namespace std;

int main()
{
	int len;
	
	cout << "Введите длинну (от 1 до 79): ";
	cin >> len;
	while(len>0 && len<80){
		cout << '.';
		len--;
	}
	cout << "\n";
	
	return 0;
}
