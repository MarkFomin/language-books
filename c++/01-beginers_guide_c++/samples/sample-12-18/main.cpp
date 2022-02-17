/*
 * Выделение памяти под массив.
 */
#include<iostream>
using namespace std;
int main(){
	int *p, i;
	try {
		p = new int[10];//выделим память под 10 чисел int
	} catch (bad_alloc const&){
		cout<<"Ошибка выделения памяти.\n";
		return 1;
	}
	for(i=0;i<10;i++){
		p[i]=i;
	}
	for(i=0;i<10;i++){
		cout<<p[i]<<" ";
	}
	cout<<"\n";
	delete[] p;//освободим память
	return 0;
}
