/*
 * Пример использования структуры.
 */
#include<iostream>
using namespace std;
struct Test {
	//эти члены public по умолчанию
	int get_i(){return i;}
	void put_i(int j){i=j;}
private:
	int i;
};
int main(){
	Test s;
	s.put_i(10);
	cout<<s.get_i()<<"\n";
	return 0;
}
