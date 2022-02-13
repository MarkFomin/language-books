/*
 * Чтение из файла с помощью get() и отображение на экране.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, const char *argv[]){
	char ch;
	if(argc!=2){
		cout<<"Использование: "<<argv[0]<<" <имя-файла>\n";
		return 1;
	}
	ifstream in(argv[1], ios::in|ios::binary);
	if(!in){
		cout<<"Не могу открыть файл.\n";
		return 1;
	}
	while(in){//in будет false, когда достигнет конца файла
		in.get(ch);
		if(in)cout<<ch;
	}
	cout<<"\n";
	in.close();
	return 0;
}
