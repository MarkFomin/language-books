/*
 * Демонстрация статической функции-члена.
 */
#include<iostream>
using namespace std;
class Test {
	static int count;
public:
	Test(){
		count++;
		cout<<"Конструируем объект "<<count<<"\n";
	}
	~Test(){
		cout<<"Уничтожаем объект "<<count<<"\n";
		count--;
	}
	static int numObjects(){return count;}
};
int Test::count;
int main(){
	Test a,b,c;
	cout<<"Теперь имеются "<<Test::numObjects()<<" в наличии.\n\n";
	Test *p=new Test();
	cout<<"После создания объекта Test имеются "<<Test::numObjects()<<" в наличии.\n\n";
	delete p;
	cout<<"После удаления объекта Test имеются "<<a.numObjects()<<" в наличии.\n\n";
	return 0;
}
