/*
 * Вывод файла начиная с заданного места.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, const char *argv[]){
	char ch;
	if(argc!=3){
		cout<<"Использовать: "<<argv[0]<<" <имя файла> <начальная позиция>\n";
		return 1;
	}
	ifstream in(argv[1], ios::in|ios::binary);
	if(!in){
		cout<<"Не могу открыть файл.\n";
		return 1;
	}
	in.seekg(atoi(argv[2]),ios::beg);
	while(in.get(ch)){
		cout<<ch;
	}
	return 0;
}
