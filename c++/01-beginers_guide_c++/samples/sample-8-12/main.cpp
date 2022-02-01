/*
 * Инициализация массива объектов.
 */
#include<iostream>
using namespace std;
class MyClass {
	int x;
public:
	MyClass(int i){
		x=i;
	}
	int get_x(){
		return x;
	}
};
int main(){
	MyClass obs[] = {-1, -2, -3, -4};
	for(int i=0; i<4; i++){
		cout<<"obs["<<i<<"].get_x(): "<<obs[i].get_x()<<"\n";
	}
	return 0;
}
