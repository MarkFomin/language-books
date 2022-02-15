/*
 * Улавливание производного класса. Программа неверна!
 */
#include<iostream>
using namespace std;
class B {};
class D : public B {};
int main(){
	D delived;
	try {
		throw delived;
	} catch (B b){
		cout<<"Пойман базовый класс.\n";
	} catch (D d) {
		cout<<"Это не будет выполняться.\n";
	}
	return 0;
}
