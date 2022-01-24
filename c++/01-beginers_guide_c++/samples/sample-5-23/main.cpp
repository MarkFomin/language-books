/*
 * Демонстрация рекурсии
 */
#include<iostream>
using namespace std;
int factr(int n);
int fact(int n);
int main(){
	// Используем рекурсивный вариант.
	cout<<"4 фактариал равен: "<<factr(4)<<"\n";
	// Используем итеративный вариант.
	cout<<"4 факториал равен: "<<fact(4)<<"\n";
	return 0;
}
// Рекурсивный вариант.
int factr(int n){
	int answer;
	if(n==1) return 1;
	answer=factr(n-1)*n;
	return answer;
}
// Итеративный вариант
int fact(int n){
	int answer=1;
	for(int t=1;t<=n;t++){
		answer=answer*t;
	}
	return answer;
}
