/*
 * Проект 11-1
 * Разработка утилиты сравнения файлов.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, const char *argv[]){
	register int i;
	unsigned char buf1[1024], buf2[1024];
	if(argc!=3){
		cout<<"Использование: "<<argv[0]<<" <файл1> <файл2>\n";
		return 1;
	}
	ifstream f1(argv[1], ios::in|ios::binary);
	if(!f1){
		cout<<"Не могу открыть первый файл.\n";
	}
	ifstream f2(argv[2], ios::in|ios::binary);
	if(!f2){
		cout<<"Не могу открыть второй файл.\n";
	}
	cout<<"Сравнение файлов...\n";
	do {
		f1.read((char*)buf1, sizeof buf1);
		f2.read((char*)buf2, sizeof buf2);
		if(f1.gcount()!=f2.gcount()){
			cout<<"Файлы имеют разную длину.\n";
			f1.close();
			f2.close();
			return 0;
		}
		//сравнение содержимого буферов.
		for(i=0;i<f1.gcount();i++){
			if(buf1[i]!=buf2[i]){
				cout<<"Файлы различаются.\n";
				f1.close();
				f2.close();
				return 0;
			}
		}
	} while(!f1.eof() && !f2.eof());
	cout<<"Файлы совпадают.\n";
	f1.close();
	f2.close();
	return 0;
}
