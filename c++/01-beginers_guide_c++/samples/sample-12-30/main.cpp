/*
 * Родовая функция Quicksort().
 */
#include<iostream>
#include<cstring>
using namespace std;
template <class X> void qs(X *items, int left, int right);
template <class X> void quicksort(X *items, int len);

// Зададим вызов фактической фунции упорядочевания.
template <class X> void quicksort(X *items, int len){
	qs(items, 0, len-1);
}
// Родовой вариант Quicksort()
template <class X> void qs(X *items, int left, int right){
	int i, j;
	X x,y;
	i=left;j=right;
	x=items[(left+right)/2];
	do {
		while((items[i]<x)&&(i<right))i++;
		while((items[j]>x)&&(j>left))j--;
		if(i<=j){
			y=items[i];
			items[i]=items[j];
			items[j]=y;
			i++; j--;
		}
	} while (i<=j);
	if(left<j)qs(items, left, j);
	if(right>i)qs(items, i, right);
}
int main(){
	// Упорядочивание символов.
	char str[]={"jfmckldoelazlkper"};
	cout<<"Исходный массив: "<<str<<"\n";
	quicksort(str, strlen(str));
	cout<<"Упорядоченный массив: "<<str<<"\n";
	// Упорядочевание целых чисел.
	int nums[]={4,3,7,5,9,8,1,3,5,4};
	cout<<"Исходный массив: ";
	for(int i=0;i<10;i++){
		cout<<nums[i]<<" ";
	}
	cout<<"\n";
	quicksort(nums, 10);
	cout<<"Упорядоченный массив: ";
	for(int i=0;i<10;i++){
		cout<<nums[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
