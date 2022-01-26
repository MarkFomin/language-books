/*
 * Использование специфического варианта strcat().
 */
#include<iostream>
#include<string.h>
using namespace std;
void mystrcat(char *s1, char *s2, int len=0);
int main(){
	char str1[80] = "Это проверка";
	char str2[80] = "01234567890";
	mystrcat(str1, str2, 5);// присоединить 5 символов
	cout<<str1<<"\n";
	strcpy(str1, "это проверка");// повторная инициализация str1
	mystrcat(str1, str2);// присоединить всю строку
	cout<<str1<<"\n";
	return 0;
}
//Специфический вариант strcat().
void mystrcat(char *s1, char*s2, int len){
	// найдем конец s1
	while(*s1)s1++;
	if(len==0) len=strlen(s2);
	while(*s2&&len){
		*s1=*s2;// копируем символы
		s1++;
		s2++;
		len--;
	}
	*s1='\0';// завершающий 0 для s1
}
