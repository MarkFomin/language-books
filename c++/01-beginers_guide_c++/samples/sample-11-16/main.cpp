/*
 * Использование get() для чтения строки, содержащей пробелы.
 */
#include<iostream>
using namespace std;
int main(){
	char str[80];
	cout<<"Введите свое имя: ";
	cin.get(str, 79);
	cout<<str<<"\n";
	return 0;
}
