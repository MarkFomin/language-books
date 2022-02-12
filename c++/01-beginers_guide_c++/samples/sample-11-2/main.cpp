/*
 * Демонстрация прикладного перегруженного оператора ввода.
 */
#include<iostream>
using namespace std;
class TreeD {
	//трехмерные координаты
	int x, y, z;
public:
	TreeD(int a, int b, int c){x=a;y=b;z=c;};
	friend ostream &operator<<(ostream &stream, const TreeD &ob);
	friend istream &operator>>(istream &stream, TreeD &ob);
};
// Вывод координат X,Y,Z - оператор вывода TreeD.
ostream &operator<<(ostream &stream, const TreeD &ob){
	return stream<<ob.x<<", "<<ob.y<<", "<<ob.z<<"\n";
}
// Получение трехмерных координат - оператор ввода TreeD.
istream &operator>>(istream &stream, TreeD&ob){
	cout<<"Введите значения X, Y, Z:\n";
	return stream>>ob.x>>ob.y>>ob.z;
}
int main(){
	TreeD a(1,2,3);
	cout<<a;
	cin>>a;
	cout<<a;
	return 0;
}
