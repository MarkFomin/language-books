/*
 * Демонстрация flags().
 */
#include<iostream>
using namespace std;
void isShowpos(){
	ios::fmtflags f;
	f=cout.flags();
	if(f&ios::showpos){
		cout<<"showpos установлен для cout\n";
	} else {
		cout<<"showpos сброшен для cout\n";
	}
}
int main(){
	isShowpos();
	cout<<"\nУстановим showpos для cout.\n";
	cout.setf(ios::showpos);
	isShowpos();
	cout<<"\nСбросим showpos для cout.\n";
	cout.unsetf(ios::showpos);
	isShowpos();
	return 0;
}
