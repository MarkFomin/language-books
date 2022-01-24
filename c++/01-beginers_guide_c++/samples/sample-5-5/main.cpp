/*
 * Возврат значения
 */
#include<iostream>
using namespace std;

int box(int length, int width, int height); //вернем объем

int main(){
	int answer;
	answer = box(10, 11, 3); // присвоим возвращаемое знаяение 
	cout<<"Объем равен: "<<answer<<"\n";
	return 0;
}
// Эта функция возвращет значение
int box(int length, int width, int height){
	return length*width*height;
}
