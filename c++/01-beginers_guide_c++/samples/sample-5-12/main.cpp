/*
 * Демонстрации сокрытия имен
 */
#include<iostream>
using namespace std;
int main(){
	int i,j;
	i=10;
	j=100;
	if(j>0){
		int i;// эта i отличается от внешней i
		i=j/2;
		cout<<"внутренняя i: "<<i<<"\n";
	}
	cout<<"внешняя i: "<<i<<"\n";
	return 0;
}
