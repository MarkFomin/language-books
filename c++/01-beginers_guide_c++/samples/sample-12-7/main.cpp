/*
 * В этом примере ловятся все исключения.
 */
#include<iostream>
using namespace std;
void Xhandler(int test){
	try{
		switch(test){
			case 0:
				throw test;  //выбросить int
				break;
			case 1:
				throw 'a';   //выбросить char
				break;
			case 2:
				throw 123.23;//выбросить double
				break;
		}
	} catch (...){//ловим все исключения
		cout<<"Поймали!\n";
	}
}
int main(){
	cout<<"Начало\n";
	for(int i=0; i<3; i++){
		Xhandler(i);
	}
	cout<<"Завершение\n";
	return 0;
}
