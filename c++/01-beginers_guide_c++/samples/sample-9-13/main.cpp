/*
 * Демонстрация объединения.
 */
#include<iostream>
using namespace std;
union u_type {
	u_type(short int a){i=a;}
	u_type(char x, char y){ch[0]=x;ch[1]=y;}
	void showchars(){
		cout<<ch[0]<<" "<<ch[1]<<"\n";
	}
	short i;
	char ch[2];
};
int main(){
	u_type u(1000);
	u_type u2('X','Y');
	cout<<"u как целое: "<<u.i<<"\n";
	cout<<"u как символы: ";
	u.showchars();
	cout<<"u2 как целое: "<<u2.i<<"\n";
	cout<<"u2 как символы: ";
	u2.showchars();
	return 0;
}
