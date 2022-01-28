/*
 * Проект 7-1
 * Функции циклического сдвига влево и вправо.
 */
#include<iostream>
using namespace std;
void show_binary(unsigned int u);
unsigned char rrotate(unsigned char val, int n);
unsigned char lrotate(unsigned char val, int n);
int main(){
	unsigned char ch = 'T';
	cout<<"Исходное значение в двоичном коде:\n";
	show_binary(ch);
	cout<<"Циклический сдвиг вправо 8 раз:\n";
	for(int i=0; i<8; i++){
		ch=rrotate(ch, 1);
		show_binary(ch);
	}
	cout<<"Циклический сдвиг вправо 8 раз:\n";
	for(int i=0; i<8; i++){
		ch=lrotate(ch, 1);
		show_binary(ch);
	}
	return 0;
}
void show_binary(unsigned int u){
	for(int t=128;t>0;t/=2){
		if(u&t) cout<<"1 ";
		else cout<<"0 ";
	}
	cout<<"\n";
}
// Циклический сдвиг байта влево на n позиций.
unsigned char lrotate(unsigned char val, int n){
	unsigned int t;
	t=val;
	for(int i=0;i<n;i++){
		t<<=1;
		/*
		 * Если бит выдвигается из байта, это будет бит 8
		 * целого числа t. В этом случае поместим этот бит
		 * с правой строны t.
		 */
		if(t&256) t|=1;// поместим 1 в самый правый бит
	}
	return t;// вернем младшие 8 бит
}
// Циклический сдвиг байта вправо на n позиций.
unsigned char rrotate(unsigned char val, int n){
	unsigned int t;
	// Сначала сдвинем значение на 8 бит влево.
	t=val<<8;
	for(int i=0;i<n;i++){
		t>>=1;
		/*
		 * Если бит выдвигается из байта, это будет бит 7
		 * целого числа t. В этом случае поместим этот бит
		 * с левой строны t.
		 */
		if(t&128) t|=32768;// поместим 1 в самый левый бит
	}
	// Наконец сдвинем результат обратно в младшие 8 бит t.
	t>>=8;
	return t;
}


