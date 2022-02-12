/*
 * Создание манипулятора вывода.
 */
#include<iostream>
#include<iomanip>
using namespace std;
ostream &setup(ostream &stream){
	stream.setf(ios::left);
	return stream<<setw(10)<<setfill('$');
}
int main(){
	cout<<10<<" "<<setup<<10<<endl;
	return 0;
}
