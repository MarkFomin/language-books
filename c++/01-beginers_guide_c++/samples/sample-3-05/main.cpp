/* 
	Демонстрация цепочки if-else-if.
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	
	for(x=0; x<6; x++){
		if(x==1) cout << "x равно единице\n";
		else if(x==2) cout << "x равно двум\n";
		else if(x==3) cout << "x равно трем\n";
		else if(x==4) cout << "x равно четырем\n";
		else cout << "x не находлится между 1 и 4\n";
	}
	
	return 0;
}
