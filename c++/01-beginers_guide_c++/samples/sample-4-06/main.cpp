/* 
	Демонстрация строковых функций
*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s1[80], s2[80];
	
	strcpy(s1, "C++");
	strcpy(s2, " мощный язык.");
	
	cout << "Длины: " << strlen(s1);
	cout << " " << strlen(s2) << "\n";
	
	if(!strcmp(s1, s2)) cout << "Строки равны\n";
	else cout << "Строки не равны\n";
	
	strcat(s1, s2);
	cout << s1 << "\n";
	
	strcpy(s2, s1);
	cout << s1 << " и " << s2 << "\n";
	
	if(!strcmp(s1, s2)) {
		cout << "s1 и s2 теперь одинаковы.\n";
	}
	
	return 0;
}
