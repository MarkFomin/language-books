/* 
	switch без предложений break.
*/

#include <iostream>
using namespace std;

int main()
{
	int i;
	
	for(i=0; i<5; i++){
		switch(i){
			case 0: cout << "меньше 1\n";
			case 1: cout << "меньше 2\n";
			case 2: cout << "меньше 3\n";
			case 3: cout << "меньше 4\n";
			case 4: cout << "меньше 5\n";
		}
		cout << "\n";
	}
	
	return 0;
}
