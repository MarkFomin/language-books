/*
 * Демонстрация использования регистровой переменной.
 */
#include<iostream>
using namespace std;
int summation(int nums[], int n);
int main(){
	int vals[] = {1,2,3,4,5};
	int result;
	result = summation(vals, 5);
	cout<<"Сумма равна: "<<result<<"\n";
	return 0;
}
// Возвращает сумму значений элементов массива чисел int.
int summation(int nums[], int n){
	register int i;
	register int sum=0;
	for(i=0;i<n;i++){
		sum+=nums[i];
	}
	return sum;
}
