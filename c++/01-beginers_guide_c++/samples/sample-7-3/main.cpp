/*
 * Вычисление текущего среднего для чисел, вводимых
 * пользователем.
 */
#include<iostream>
using namespace std;
int running_agv(int i);
int main(){
	int num;
	do {
		cout<<"Вводите числа (-1) для завершения: ";
		cin>>num;
		if(num!=-1){
			cout<<"Текущее среднее равно: "<<running_agv(num);
		}
		cout<<"\n";
	} while (num=-1);
	return 0;
}
int running_agv(int i){
	static int sum=0,count=0;
	sum+=i;
	count++;
	return sum / count;
}
