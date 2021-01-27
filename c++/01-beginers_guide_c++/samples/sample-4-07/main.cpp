/* 
	Преобразование строчных символов в прописные
*/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	char str[80];
	int i;
	
	strcpy(str, "this is a test");
	
	for(i=0; str[i]; i++) str[i] = toupper(str[i]);
	
	cout << str << "\n";
	
	return 0;
}
