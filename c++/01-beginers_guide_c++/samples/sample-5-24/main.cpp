/*
 * Вывод строки задом наперед посредством рекурсии.
 */
#include<iostream>
using namespace std;
void reverse(char *s);
int main(){
	char str[] = "this is sample text";
	reverse(str);
	cout<<"\n";
	return 0;
}
// Вывод строки задом наперед
void reverse(char *s){
	if(*s) reverse(s+1);
	else return;
	cout<<*s;
}
