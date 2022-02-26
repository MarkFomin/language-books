/*
 * Следующий код содержит ошибки в работе с библиотекой STL (синтаксические, семантические, логические):
 * 16, 13, 19, 18, 12 */
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	
	map<int,string> m;
	m.insert(make_pair(13,"One"));//1
	auto it = m.find(13);//2
	if(it!=m.end())
	{
		const_cast<int &>(it->first)=100000;//3
	}
	cout<<it->first()<<endl;//4 (X)
	cout<<it->second<<endl;//5
	
	cin.get();
	return 0;
}
