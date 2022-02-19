/*
 * Использование статической переменной класса.
 */
#include<iostream>
using namespace std;
class ShareVar {
	static int num;
public:
	void setnum(int n){num=n;};
	void shownum(){
		cout<<num<<" ";
	}
};
int ShareVar::num;//определим тип
int main(){
	ShareVar a,b;
	a.shownum();//выводит 0
	b.shownum();//выводит 0
	a.setnum(10);//устанавливает num=10
	a.shownum();//выводит 10
	b.shownum();//также выводит 10
	cout<<"\n";
	return 0;
}
