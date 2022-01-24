/*
 * Проект 5-1
 * Вариант алгоритма QuickSort для упорядочения символов.
 */
#include<iostream>
#include<string.h>
using namespace std;
void quicksort(char *items, int len);
void qs(char *items, int left, int right);
int main(){
	char str[] = "jfmckldoelazlkper";
	int i;
	cout<<"Исходный массив: "<<str<<"\n";
	quicksort(str, strlen(str));
	cout<<"Упорядоченный массив: "<<str<<"\n";
	return 0;
}
// Вызовем функцию, выполняющую фактическое упорядочение.
void quicksort(char * items, int len){
	qs(items, 0, len-1);
}
// Рекурсивный вариант алгоритма QuickSort
// для упорядочения символов.
void qs(char *items, int left, int right){
	int i, j;
	char x, y;
	i=left; j=right;
	x=items[(left+right)/2];
	do {
		while((items[i]<x)&&(i<right)) i++;
		while((x<items[j])&&(j>left)) j--;
		if(i<=j){
			y=items[i];
			items[i]=items[j];
			items[j]=y;
			i++;j--;
		}
	} while(i<=j);
	if(left<j) qs(items, left, j);
	if(i<right) qs(items, i, right);
}
