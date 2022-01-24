/*
 * Напишите программу, которая требует ввод пароля, указываемого
 * на командной строке. Ваша программа может не выполнять ника­
 * кой полезной работы, а только выводить сообщение, правильный
 * ли пароль введен.
 */
#include<iostream>
#include<string.h>
using namespace std;
bool checkPassword(char *password);
int main(int argc, char *argv[]){
	if(argc!=2){
		cout<<"Трубуется пароль!";
	}
	cout<<"Доступ "<<(checkPassword(argv[1])?"разрещен.\n":"запрещен.\n");
	return 0;
}
bool checkPassword(char *password){
	char valid[]="123456";
	return !strcmp(valid, password);
}
