/*
 * Демонстрация предопределенных макросов.
 */
#include<iostream>
using namespace std;
int main(){
	cout<<"__LINE__ "<<__LINE__<<"\n";
	cout<<"__FILE__ "<<__FILE__<<"\n";
	cout<<"__DATE__ "<<__DATE__<<"\n";
	cout<<"__TIME__ "<<__TIME__<<"\n";
	cout<<"__STDC__ "<<__STDC__<<"\n";
	cout<<"__cplusplus "<<__cplusplus<<"\n";
#line 100 "test.cpp"
	cout<<"__LINE__ "<<__LINE__<<"\n";
	cout<<"__FILE__ "<<__FILE__<<"\n";
	return 0;
}
