/*
 * Простой пример использования typeid.
 */
#include<iostream>
using namespace std;
class MyClass {
	//...
};
int main(){
	int i, j;
	float f;
	MyClass ob;
	cout<<"Тип i: "<<typeid(i).name()<<"\n";
	cout<<"Тип f: "<<typeid(f).name()<<"\n";
	cout<<"Тип ob: "<<typeid(ob).name()<<"\n\n";
	if(typeid(i)==typeid(j)){
		cout<<"Объекты i и j совпадают.\n";
	}
	if(typeid(i)!=typeid(f)){
		cout<<"Объекты i и f различны.\n";
	}
}
