/*
 * Используем указатель "this".
 */
#include<iostream>
using namespace std;
class Test {
	int val;
public:
	void load_i(int i){this->val=i;}
	int get_i(){return this->val;}
};
int main(){
	Test o;
	o.load_i(100);
	cout<<o.get_i()<<"\n";
	return 0;
}
