/* 
	Демонстрация операторова отношения и логических.
*/

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	bool b1, b2;
	
	i = 10;
	j = 11;
	
	if(i < j) cout << "i < j\n";
	if(i <= j) cout << "i <= j\n";
	if(i != j) cout << "i != j\n";
	if(i == j) cout << "это не будет выполняться\n";
	if(i >= j) cout << "это не будет выполняться\n";
	if(i > j) cout << "это не будет выполняться\n";
	
	b1 = true;
	b2 = false;
	if(b1 && b2) cout << "это не будет выполняться\n";
	if(!(b1 && b2)) cout << "!(b1 && b2) есть истина\n";
	if(b1 || b2) cout << "b1 || b2 есть истина\n";
	
	return 0;
}
