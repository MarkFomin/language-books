/*
 * В Проекте 6-1 вы создали набор функций print() и println (). До­
 * бавьте в эти функции второй параметр, который будет задавать ве­
 * личину отступа. Например, при вызове print() таким образом:
 *   print("проба", 18);
 * строка “проба” будет выведена на экран после 18 пробелов. На­
 * значьте параметру отступа значение 0 по умолчанию, чтобы при
 * его отсутствии текст выводился без отступа.
 */
#include<iostream>
using namespace std;
void print(char const *str, int shift=0);
void println(char const *str, int shift=0);
int main(){
	print("Один");
	println("Два", 3);
	print("Три", 2);
	println("Четыре");
	return 0;
}
void print(char const *str, int shift){
	while(shift--) cout<<".";
	cout<<str;
}
void println(char const *str, int shift){
	while(shift--) cout<<".";
	cout<<str<<"\n";
}
