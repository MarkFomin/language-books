/*
 * Использование setiosflags().
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<setiosflags(ios::showpos)<<setiosflags(ios::scientific)<<123<<" "<<123.23<<endl;
	return 0;
}
