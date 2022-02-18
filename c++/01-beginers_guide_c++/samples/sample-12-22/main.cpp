/*
 * Демонстрация using.
 */
#include<iostream>
using namespace std;
namespace CounterNameSpace {
	int upperbound;
	int lowerbound;
	class counter {
		int count;
	public:
		counter(int n){
			if(n<=upperbound)count=n;
			else count=upperbound;
		}
		void reset(int n){
			if(n<=upperbound)count=n;
		}
		int run(){
			if(count>lowerbound) return count--;
			return lowerbound;
		}
	};
}
int main(){
	// Используем только upperbound из CounterNameSpace.
	using CounterNameSpace::upperbound;
	// Теперь установим upperbound квалификация не требуется.
	upperbound=100;
	// Квалификация все еще нужна для lowerbound и др.
	CounterNameSpace::lowerbound=0;
	CounterNameSpace::counter ob1(10);
	int i;
	do {
		i=ob1.run();
		cout<<i<<" ";
	} while (i>CounterNameSpace::lowerbound);
	cout<<"\n";
	// Теперь используем все пространство имен CounterNameSpace.
	using namespace CounterNameSpace;
	counter ob2(20);
	do {
		i=ob2.run();
		cout<<i<<" ";
	} while (i>lowerbound);
	cout<<"\n";
	ob2.reset(100);
	lowerbound=90;
	do {
		i=ob2.run();
		cout<<i<<" ";
	} while (i>lowerbound);
	cout<<"\n";
	return 0;
}
