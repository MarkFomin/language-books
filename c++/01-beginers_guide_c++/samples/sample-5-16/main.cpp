/*
 * Изменение содержимого массива с помощью функции
 */
#include<iostream>
using namespace std;
void cube(int *n, int num);
int main(){
	int i, nums[10];
	for(i=0;i<10;i++) nums[i]=i+1;
	cout<<"Исходное содержимое: ";
	for(i=0;i<10;i++) cout<<nums[i]<<' ';
	cout<<"\n";
	cube(nums,10);// вычисление кубов
	cout<<"Измененное содержимое: ";
	for(i=0;i<10;i++) cout<<nums[i]<<' ';
	cout<<"\n";
	return 0;
}
// возведение в куб элементов массива
void cube(int *n, int num){
	while(num--){
		*n = *n * *n * *n;
		n++;
	}
}
