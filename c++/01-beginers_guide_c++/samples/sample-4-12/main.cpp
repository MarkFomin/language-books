/* 
	Демонстрация присвоения значения посредством указателя.
*/

#include <iostream>
using namespace std;

int main()
{
	int *p, num;
	
	p = &num;
	
	*p = 100;
	cout << *p << ' ';
	(*p)++;
	cout << *p << ' ';
	(*p)--;
	cout << *p << '\n';
	
	return 0;
}
