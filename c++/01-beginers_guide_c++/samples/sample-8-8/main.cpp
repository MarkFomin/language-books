/*
 * Демонстрация описателя inline.
 */
#include<iostream>
using namespace std;
class cl {
	int i;// закрта по умолчанию 
public:
	int get_i();
	void put_i(int j);
};
inline int cl::get_i(){
	return i;
}
inline void cl::put_i(int j){
	i=j;
}
int main(){
	cl s;
	s.put_i(10);
	cout<<s.get_i()<<"\n";
	return 0;
}
