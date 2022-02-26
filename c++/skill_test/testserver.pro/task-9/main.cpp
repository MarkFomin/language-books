/*
 * Каков порядок вызова конструкторов в следующем фрагменте кода?
 * 1) 7
 * 2) 9
 * 3) 12 (x)
 * 4) 6
 * 5) 10
 */
#include<iostream>
using namespace std;
template <int size> class Clazz {
public:
	static const int n = 2 + Clazz<size-1>::n + Clazz<size-2>::n;
};
template <> class Clazz<1> {
public:
	static const int n = 5;
};
template <> class Clazz<0> {
public:
	static const int n = 2;
};
int main(){
	cout<<Clazz<3>::n<<endl;
	cin.get();
	return 0;
}
