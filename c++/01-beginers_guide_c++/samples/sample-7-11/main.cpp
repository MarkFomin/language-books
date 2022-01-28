/*
 * Пример операций сдвига.
 */
#include<iostream>
using namespace std;
void show_binary(unsigned int u);
int main(){
	unsigned int i, t;
	i=1;
	// сдвиг влево
	for(t=0;t<8;t++){
		show_binary(i);
		if(t<7) i<<=1;
	}
	cout<<"\n";
	// сдвиг враво
	for(t=0;t<8;t++){
		show_binary(i);
		i>>=1;
	}
	return 0;
};
// Отображение битов байта.
void show_binary(unsigned int u){
	for(int t=128;t>0;t/=2){
		if(u&t) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
}
