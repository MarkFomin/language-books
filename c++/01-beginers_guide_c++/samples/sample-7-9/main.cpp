/*
 * Использование XOR для шифрования и расшифровки сообщения.
 */
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char msg[] = "This Is A Test.";
	char key = 88;
	cout<<"Исходное сообщение: "<<msg<<"\n";
	for(unsigned int i=0; i<strlen(msg); i++) msg[i]^=key;
	cout<<"Зашифрованное сообщение: "<<msg<<"\n";
	for(unsigned int i=0; i<strlen(msg); i++) msg[i]^=key;
	cout<<"Расшифрованное сообщение: "<<msg<<"\n";
	return 0;
}
