/*
 * Запись в файл.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream out("test");
	if(!out){
		cout<<"Не могу открыть файл.\n";
		return 1;
	}
	out<<10<<" "<<10.23<<"\n";
	out<<"Это короткий текстовый файл.\n";
	out.close();
	return 0;
}
