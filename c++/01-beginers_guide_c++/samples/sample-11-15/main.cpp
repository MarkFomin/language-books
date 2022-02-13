/*
 * Использование read() и write().
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n[5] = {1,2,3,4,5};
	register int i;
	ofstream out("test", ios::out|ios::binary);
	if(!out){
		cout<<"Не могу открыть файл\n";
		return 1;
	}
	out.write((const char*)&n, sizeof n);
	out.close();
	for(i=0;i<5;i++){//очистим массив
		n[i]=0;
	}
	ifstream in("test", ios::in|ios::binary);
	if(!in){
		cout<<"Не могу открыть файл\n";
		return 1;
	}
	in.read((char*)&n, sizeof n);
	//показывает значения, прочитанные из файла
	for(i=0;i<5;i++){
		cout<<n[i]<<" ";
	}
	cout<<"\n";
	in.close();
	return 0;
}
