/*
 * Простой пример использования директивы ifdef, ifndef и undef
 */
#include<iostream>
using namespace std;
#define MAX 100
int main(){
#ifdef MAX
	cout<<"MAX объявлена.\n";
#endif
#undef MAX
#ifndef MAX
	cout<<"MAX теперь не объявлена.\n";
#endif
	return 0;
}
