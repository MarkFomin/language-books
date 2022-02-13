/*
 * Прочитаем из файла.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	int i;
	float f;
	char str[80];
	ifstream in("test");
	if(!in){
		cout<<"Не могу открыть файл.\n";
		return 1;
	}
	in>>i;
	in>>f;
	in>>ch;
	in>>str;
	cout<<i<<" "<<f<<" "<<ch<<"\n";
	cout<<str<<"\n";
	in.close();
	return 0;
}
