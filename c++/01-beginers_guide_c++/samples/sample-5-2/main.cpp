/*
 * Простая программа, демонстрирующая использованияе box()
 */
#include<iostream>
using namespace std;
void box(int, int, int);//Прототип box()
int main(){
	box(7,  20, 4);
	box(50, 3, 2);
	box(8, 6, 9);
	return 0;	
}
void box(int length, int width, int height){
	cout << "Объем коробки равен: " << length*width*height<< "\n";
}
