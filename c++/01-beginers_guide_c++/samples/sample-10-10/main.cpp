/*
 * Пример нескольких базовых классов.
 */
#include<iostream>
using namespace std;
class B1 {
protected:
	int x;
public:
	void showx(){cout<<x<<"\n";}
};
class B2{
protected:
	int y;
public:
	void showy(){cout<<y<<"\n";}
};
// Множественное наследоваие.
class D: public B1, public B2 {
public:
	/*
	 * x и y доступны, потому что они объявлены
	 * защищенными в B1 и B2, а не закрытыми.
	 */
	void set(int i, int j){x=i; y=j;}
};
int main(){
	D ob;
	ob.set(10,20);
	ob.showx();
	ob.showy();
	return 0;
}
