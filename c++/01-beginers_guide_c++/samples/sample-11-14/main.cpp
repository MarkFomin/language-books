/*
 * Использование put() для записи в файл.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	const char *p="Привет всем!\n";
	ofstream out("test", ios::out|ios::binary);
	if(!out){
		cout<<"Не могу открыть файл\n";
		return 1;
	}
	// Запись символов, пока не будет достигнут завершающий ноль.
	while(*p){
		out.put(*p++);
	}
	out.close();
	return 0;
}
