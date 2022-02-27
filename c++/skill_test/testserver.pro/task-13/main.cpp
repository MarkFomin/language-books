/*
 * Что будет напечатано в консоли в результате работы этого кода?
 * 1) 10 20 30 
 * 2) 20 20 30 20
 * 3) Ничего
 * 4) 10
 * 5) 10 20 30 20 10 (x)
 */
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int myints[] = {10,20,20,20,30,30,20,20,10};
	vector<int>myvector (myints, myints+9);
	vector<int>::iterator it;
	it = unique(myvector.begin(), myvector.end());
	myvector.resize(it-myvector.begin());
	for(it=myvector.begin();it!=myvector.end();++it){
		cout<<" "<<*it;
	}
	return 0;
}
