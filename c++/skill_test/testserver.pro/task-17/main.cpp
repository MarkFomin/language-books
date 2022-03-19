/*
 * Какой контейнер не входит в библиотеку STL?
 * 1) bitset
 * 2) queue
 * 3) stack
 * 4) все перечисленные контейнеры входят в STL (x)
 * 5) multiset
 */
#include<iostream>
#include<bitset>
#include<queue>
#include<stack>
#include<iterator>
#include<set>

using namespace std;
int main () {
	//std::bitset - набор N битов
	bitset<10> bits{"0011000101"};
	bits.reset(0);
	bits.set(1,true);
	bits.flip(2);
	cout<<bits<<"\n";
	//std::queue - очередь
	queue<int> q;
	for(int i=0;i<3;i++) q.push(i);
	while(q.size()) {
		cout<<" "<<q.front();
		q.pop(); 
	}
	cout<<"\n";
	//std::stack - стэк
	stack<int> s;
	for(int i=0;i<3;i++) s.push(i);
	while(s.size()) {
		cout<<" "<<s.top();
		s.pop(); 
	}
	cout<<"\n";
	//std::multiset - отсортированный ряд, с возможностью дублирования значения элементов
	multiset<int, greater<int>> ms;
	//multiset<int, less<int>> ms;
	ms.insert(1);
	ms.insert(0);
	ms.insert(3);
	ms.insert(3);
	ms.insert(2);
	multiset<int, int>::iterator itr;
	for(itr=ms.begin(); itr!=ms.end(); ++itr){
		cout<<" "<<*itr;
	}
	cout<<"\n";
	return 0;
}
