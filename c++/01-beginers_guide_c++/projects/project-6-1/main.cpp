/*
 * Проект 6-1
 * Создание перегруженных функций print() и println(),
 * которые выводят на экран данные разных типов.
 */
#include<iostream>
using namespace std;
// Эти функции выполняют перевод строки.
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char const *str);
void println(double d);
// Эти функции не переводят строку.
void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char const *str);
void print(double d);
int main(){
	println(true);
	println(10);
	println("Это проверка");
	println('x');
	println(99L);
	println(123.33);
	
	print("Вот некоторые значения: ");
	print(false);
	print(' ');
	print(88);
	print(' ');
	print(100000L);
	print(' ');
	print(100.01);
	
	println(" Все!");
	return 0;
}
// Вот набор функции println()
void println(bool b){
	if(b)cout<<"true\n";
	else cout<<"false\n";
}
void println(int i){
	cout<<i<<"\n";
}
void println(long i){
	cout<<i<<"L\n";
}
void println(char ch){
	cout<<ch<<"\n";
}
void println(char const *str){
	cout<<str<<"\n";
}
void println(double d){
	cout<<d<<"\n";
}
// Набор функций print().
void print(bool b){
	if(b)cout<<"true";
	else cout<<"false";
}
void print(int i){
	cout<<i;
}
void print(long i){
	cout<<i<<"L";
}
void print(char ch){
	cout<<ch;
}
void print(char const *str){
	cout<<str;
}
void print(double d){
	cout<<d;
}
