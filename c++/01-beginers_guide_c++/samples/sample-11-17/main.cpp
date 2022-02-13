/*
 * Демонтрация произвольного доступа.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, const char *argv[]){
	if(argc!=3){
		cout<<"Использование: "<<argv[0]<<" <имя-файла> <номер-байта>\n";
		return 1;
	}
	fstream out(argv[1], ios::in|ios::out|ios::binary);
	if(!out){
		cout<<"Не могу открыть файл.\n";
		return 1;
	}
	out.seekp(atoi(argv[2]),ios::beg);
	out.put('X');
	out.close();
	return 0;
}
