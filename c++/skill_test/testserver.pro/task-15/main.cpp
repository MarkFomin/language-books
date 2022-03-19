/*
 * Чему будет равна Inner::d при выводе в строке 26 следующего кода?
 * 1) Значение не определено
 * 2) 150 (x)
 * 3) Код не скомпилируется
 * 4) 300
 * 5) 200
 */
#include<iostream>
using namespace std;
namespace Prog {
	int d = 5;
}
namespace Outer {
	double d = 100;
	namespace Middle {
		double d = 10*Prog::d;//50
		namespace Inner {
			int d = Middle::d + Outer::d + d;
		}
	}
}
int main(){
	using namespace Outer;
	using namespace Middle;
	cout<<Inner::d;
	cin.get();
	return 0;
}
