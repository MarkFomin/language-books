/*
 * Передача строки в функцию
 */
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
void strInvertCase(char *str);
int main(){
	char str[80];
	strcpy(str, "This Is A Test.");
	strInvertCase(str);
	cout<<str<<"\n";// вывод модифицированной строки
	return 0;
}
// преобразование регистра букв внутри строки
void strInvertCase(char *str){
	while(*str){
		// преобразуем регистр
		if(isupper(*str)) *str=tolower(*str);
		else if(islower(*str)) *str=toupper(*str);
		str++;// сместимся к следующему символу
	}
}
