/* 
	Обращение регистра посредством индексации массива.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char str[80] = "This Is A Test";
	
	cout << "Это исходная строка: " << str << "\n";
	
	for(i=0; str[i]; i++){
		if(isupper(str[i])){
			str[i] = tolower(str[i]);
		} else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	
	cout << "Преобразованная строка: " << str << "\n";
	
	return 0;
}
