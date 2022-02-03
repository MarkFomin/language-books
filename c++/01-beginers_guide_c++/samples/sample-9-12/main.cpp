/*
 * Демонстрация отличия класса от структуры.
 */
#include<iostream>
using namespace std;
class Test {
	int i;//private по умолчанию
public:
	int get_i(){return i;}
	void put_i(int j){i=j;}
};
int main(){
	Test s;
	s.put_i(10);
	cout<<s.get_i()<<"\n";
}
