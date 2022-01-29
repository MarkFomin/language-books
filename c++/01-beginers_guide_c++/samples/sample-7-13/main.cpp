/*
 * Используя функции lrotate() и rrotate() из Проекта 7-1, возможно
 * шифровать и расшифровывать строку. Для шифрования строки
 * выполните циклический сдвиг каждой буквы влево на некоторое
 * число битов, задаваемое ключом. Для расшифровки выполните
 * циклический сдвиг каждой буквы вправо на то же число битов. Ис­
 * пользуйте ключ, состоящий из строки символов. Можно приду­
 * мать много способов вычисления числа сдвигов, исходя из содер­
 * жимого ключа. Проявите творческий подход. Решение, показанное
 * в Приложении А, является лишь одним из многих возможных.
 */
#include<iostream>
#include<string.h>
using namespace std;
void show_binary(unsigned int u);
void rrotate(unsigned char &val, int n);
void lrotate(unsigned char &val, int n);
void encrypt(char *data, char const *key);
void decrypt(char *data, char const *key);
int main(){
	char key [] = "21312";
	char data [] = "This Is A Test.";
	cout<<"Иходный тескт: "<<data<<"\n";
	encrypt(data, key);
	cout<<"Зашифрованый текст: "<<data<<"\n";
	decrypt(data, key);
	cout<<"расшифрованный текст: "<<data<<"\n";
	return 0;
}
void show_binary(unsigned int u){
	for(int t=128;t>0;t/=2){
		if(t&u) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
}
void rrotate(unsigned char &val, int n){
	unsigned int t = val;
	for(int i=0; i<n; i++){
		t<<=1;
		if(t&0x100) t|=1;
	}
	val = t;
}
void lrotate(unsigned char &val, int n){
	unsigned int t = val<<8; 
	for(int i=0; i<n; i++){
		t>>=1;
		if(t&0x80) t|=0x8000;
	}
	val=t>>8;
}
void encrypt(char *data, char const*key){
	if(!data || !key) return;
	int len, klen, shift;
	len=strlen(data);
	klen=strlen(key);
	for(int i=0; i<len; i++){
		shift = key[i%klen]%8;
		lrotate((unsigned char &)data[i], shift);
	}
}
void decrypt(char *data, char const *key){
	if(!data || !key) return;
	int len, klen, shift;
	len = strlen(data);
	klen = strlen(key);
	for(int i=0; i<len; i++){
		shift = key[i%klen]%8;
		rrotate((unsigned char &)data[i], shift);
	}
}
