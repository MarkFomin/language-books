/*
 * Использование setf().
 */
#include<iostream>
using namespace std;
int main(){
	// Установка флагов showpos и scientific.
	cout.setf(ios::showpos);
	cout.setf(ios::scientific);
	cout<<123<<" "<<123.23<<" \n";
	return 0;
}
