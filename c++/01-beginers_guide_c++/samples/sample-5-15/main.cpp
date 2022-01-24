/*
 * Передача массива в функцию
 */
#include<iostream>
using namespace std;

void display1(int num[10]);
void display2(int num[10]);
void display3(int *num);

int main(){
	int t[10], i;
	for(i=0; i<10; ++i) t[i]=i;
	// передача в функцию массива t
	display1(t);
	display2(t);
	display3(t);
	return 0;
}
void display1(int num[10]){
	cout<<"Display1\n";
	for(int i=0; i<10; i++) cout<<" "<<num[i];
	cout<<"\n";
}
void display2(int num[]){
	cout<<"Display2\n";
	for(int i=0; i<10; i++) cout<<" "<<num[i];
	cout<<"\n";
}
void display3(int *num){
	cout<<"Display3\n";
	for(int i=0; i<10; i++) cout<<" "<<num[i];
	cout<<"\n";
}
