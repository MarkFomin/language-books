/* 
	Пример заполнения двумерного массива числами от 0 до 12.
*/

#include <iostream>
using namespace std;

int main()
{
	int i, t, nums[3][4];
	
	for(t=0; t<3; t++){
		for(i=0; i<4; i++){
			nums[t][i] = (t*4)+i+1;
			cout << nums[t][i] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
