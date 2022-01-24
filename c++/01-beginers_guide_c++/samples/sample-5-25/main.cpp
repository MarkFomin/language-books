/*
 * Создайте собственный вариант функции strlen() стандартной биб­лиотеки
 */
#include<iostream>
using namespace std;
int strlen(char const *str);
int main(){
	char str[] = "This Is A Test.";
	cout<<"Строка имеет длинну: "<<strlen(str)<<"\n";
	return 0;
}
int strlen(char const *str){
	int len=0;
	while(str[++len]);
	return len;
}
