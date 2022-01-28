/*
 * Ипользование const с оператором-указателем.
 */
#include<iostream>
using namespace std;
int myNegate(const int *val);
int main(){
	int result;
	int v = 10;
	result=myNegate(&v);
	cout<<v<<" отрацние: "<<result<<"\n";
	return 0;
}
int myNegate(const int *val){
	// *val = -*val;// Ошибка, изменение недопустимо.
	return -*val;
}
