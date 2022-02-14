/*
 * Напишите программу, которая копирует файлы. Пользователь
 * должен задавать имена входного и выходного файлов в командной
 * строке. Удостоверьтесь, что ваша программа копирует как тексто­
 * вые, так и двоичные файлы.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, const char *argv[]){
	char buf[1024];
	if(argc!=3){
		cout<<"Использовать: "<<argv[0]<<" <имя файла 1> <имя файла 2>\n";
		return 1;
	}
	ifstream in(argv[1], ios::in|ios::binary);
	if(!in){
		cout<<"Не могу открыть первый файл\n";
		return 1;
	}
	ofstream out(argv[2], ios::out|ios::binary);
	if(!out){
		in.close();
		return 1;
	}
	do {
		in.read(buf, sizeof buf);
		if(in.gcount()){
			out.write(buf, in.gcount());
		}
	} while (!in.eof());
	in.close();
	out.close();
	return 0;
}
