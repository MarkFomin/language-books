/*
 * Простой пример использования директивы #if
 */
#include<iostream>
using namespace std;
#define MAX 100
int main(){
#if MAX > 10
	cout<<"Требуется дополнительная память.\n";
#endif
#ifdef MAX
	cout<<"MAX объявлена.\n";
#endif
#undef MAX
#ifndef MAX
	cout<<"MAX теперь не объявлена.\n";
#endif
	return 0;
}
