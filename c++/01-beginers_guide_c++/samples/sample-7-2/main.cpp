/*
 * 
 */
#include<iostream>
#include"file.h"
using namespace std;
int x, y;
char ch;
void func();
int main(){
	x=3;
	y=5;
	ch='c';
	cout<<"x: "<<x<<", y: "<<y<<", ch: "<<ch<<"\n";
	func();
	cout<<"x: "<<x<<", y: "<<y<<", ch: "<<ch<<"\n";
	func22();
	cout<<"x: "<<x<<", y: "<<y<<", ch: "<<ch<<"\n";
	func23();
	cout<<"x: "<<x<<", y: "<<y<<", ch: "<<ch<<"\n";
	return 0;
}
void func(){
	ch='a';
	x=123;
}
