/*
 * Переменные могут быть локальными по отношению к блоку
 */
#include<iostream>
using namespace std;

int main(){
	int x=19;// переменная известная всюду
	if(x==19){
		int y=20;
		cout<<"x+y="<<x+y<<"\n";
	}
	//y=100;// ошибка, здесь y не известна
	return 0;
}
