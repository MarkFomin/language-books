/*
 * Простой пример использования директивы #if/#else
 */
#include<iostream>
using namespace std;
#define MAX 10
int main(){
#if MAX>10
	cout<<"Требуется дополнительная память.\n"
#else
	cout<<"Выделенной памяти достаточно.\n";
#endif
	return 0;
}
