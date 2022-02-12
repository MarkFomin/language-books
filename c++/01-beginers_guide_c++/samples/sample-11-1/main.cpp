/*
 * Демонстрация перегруженного оператора вывода
 * для произвольного класса.
 */
#include<iostream>
using namespace std;
class TreeD {
	// Трехмерные координаты.
	int x, y, z;
public:
	TreeD(int a, int b, int c){x=a;y=b;z=c;}
	// Вывод координат X, Y, Z - оператор вывода для TreeD. 
	friend ostream &operator<<(ostream &stream, const TreeD &ob);
};
ostream &operator<<(ostream &stream, const TreeD &ob){
	stream<<ob.x<<", "<<ob.y<<", "<<ob.z<<"\n";
	return stream;//возврат потока
}
int main(){
	TreeD a(1,2,3), b(3,4,5), c(5,6,7);
	cout<<a<<b<<c;
	return 0;
}
