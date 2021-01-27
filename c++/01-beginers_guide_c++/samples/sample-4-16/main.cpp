/* 
	Индексация указателя, как если бы он был массивом.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char *p;
	int i;
	char str[80] = "This Is A Test";
	
	cout << "Это исходная строка: " << str << "\n";
	
	p = str; // присвоим p адрес начала массива
	
	// теперь индескируем p
	for(i=0; p[i]; i++){
		if(isupper(p[i])){
			p[i] = tolower(p[i]);
		} else if (islower(p[i])) {
			p[i] = toupper(p[i]);
		}
		p++;
	}
	
	cout << "Преобразованная строка: " << str << "\n";
	
	return 0;
}
