/*
 * Преобразование в прописные буквы с помощью побитовгого И.
 */
#include<iostream>
using namespace std;
int main(){
	char ch;
	for(int i=0; i<10; i++){
		ch = 'a'+i;
		cout<<ch;
		// Это предложение сбрасывает 6-й бит.
		ch&=223;// буква ch теперь прописная
		cout<<ch<<" ";
	}
	cout<<"\n";
	return 0;
}
