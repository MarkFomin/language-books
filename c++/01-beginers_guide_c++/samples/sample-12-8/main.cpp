/*
 * Ограничение типов исключений, выбрасываемых функцией.
 */
#include<iostream>
using namespace std;
// Эта функция выбрасывает только int, char и double.
void Xhandler(int test) throw (int, char, double) {
	switch (test) {
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
}
int main(){
	cout<<"Начало\n";
	for(int i=0;i<3;i++){
		try {
			Xhandler(i);
		} catch (int i) {
			cout<<"Поймали int: "<<i<<"\n";
		} catch (char ch){
			cout<<"Поймали char: "<<ch<<"\n";
		} catch (double d) {
			cout<<"Поймали double: "<<d<<"\n";
		}
	}
	return 0;
}
