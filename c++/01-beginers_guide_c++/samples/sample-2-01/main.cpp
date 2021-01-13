/* 
	Эта программа демонстрирует различия между
	целыми числами со знаком и без знака.
*/

#include <iostream>
using namespace std;

int main()
{
	short int i; //короткое целое со знаком
	short unsigned int j; //короткое целое без знака
	
	i=60000;
	j=i;
	
	cout << i << " " << j << "\n";
	
	return 0;
}
