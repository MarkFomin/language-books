/* 
 * Напишите программу, которая подсчитывает число прописных
 * букв в строке и выводит результат на экран.
 */
#include<iostream>
using namespace std;
int main(){
	char const *str = "Test string 123";
	char const *p = str;
	int count=0;
	do {
		if(isupper(*p)) count++;
	} while (*p++);
	cout << "Строка \'"<<str<<"\' содержит " << count << " прописных букв.\n";
	return 0;
}
