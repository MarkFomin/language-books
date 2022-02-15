/*
 * Выбрасование исключения из функции,
 * вызванной внутри блока try.
 */
#include<iostream>
using namespace std;
void Xtest(int test){
	cout<<"Внутри Xtest, пробное значение равно: "<<test<<"\n";
	if(test) throw test;
}
int main(){
	cout<<"Начало\n";
	try {//начинается блок try
		cout<<"Внутри блока try\n";
		for(int j=0;j<3;j++)Xtest(j);
	} catch (int i){//поймаем ошибку
		cout<<"Поймано исключение - значение равно "<<i<<"\n";
	}
	cout<<"Завершение\n";
	return 0;
}
