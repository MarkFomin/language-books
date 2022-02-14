/*
 * Напишите программу, которая объединяет два текстовых фай­
 * ла. Пользователь должен задавать имена двух файлов в команд-
 * ной строке в том порядке, в котором он и должны войти в вы­
 * ходной файл. Кроме того, пользователь должен задавать имя
 * выходного файла. Таким образом, если програм м а имеет имя
 * merge, то командная строка, которая объединит файлы
 * MyFilel.txt и MyFile2.txt в файл Target.txt, будет выглядеть сле­
 * дующим образом:
 * merge MyFilel.txt MyFile2.txt Target.txt
 */
#include<iostream>
#include<fstream>
using namespace std;
void merge(ifstream &in, ofstream &out){
	char buf[1024];
	do {
		in.read(buf, sizeof buf);
		if(in.gcount()){
			out.write(buf, in.gcount());
		}
	} while(!in.eof());
}
int main(int argc, const char *argv[]){
	if(argc!=4){
		cout<<"Использовать: "<<argv[0]<<"<имя файлв 1> <имя файла 2> <имя файла 3>\n";
		return 1;
	}
	ifstream f1(argv[1], ios::in|ios::binary);
	if(!f1){
		cout<<"Не могу открыть первый файл\n";
		return 1;
	}
	ifstream f2(argv[2], ios::in|ios::binary);
	if(!f2){
		cout<<"Не могу открыть второй файл\n";
		f1.close();
		return 1;
	}
	ofstream f3(argv[3], ios::out|ios::binary);
	if(!f3){
		cout<<"Не могу открыть третий файл\n";
		f1.close();
		f2.close();
		return 1;
	}
	merge(f1, f3);
	merge(f2, f3);
	f1.close();
	f2.close();
	f3.close();
	return 0;
}
