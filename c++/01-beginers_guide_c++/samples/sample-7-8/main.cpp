/*
 * Преобразование в строчные буквы с помощью побитового ИЛИ. 
 */
#include<iostream>
using namespace std;
int main(){
	char ch;
	for(int i=0; i<10; i++){
		ch='A'+i;
		cout<<ch;
		// Это предложение устанавливает 6-й бит.
		ch|=32;// буква ch теперь строчная
		cout<<ch<<" ";
	}
	cout<<"\n";
	return 0;	
}
