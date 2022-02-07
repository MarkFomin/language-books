/*
 * Демонстрация защищенных членов.
 */
#include<iostream>
using namespace std;
class B {
protected:
	int i, j;//закрыты в B, но доступны из D
public:
	void set(int a, int b){ i=a; j=b; }
	void show(){ cout<<i<<", "<<j<<"\n"; }
};
class D : public B {
	int k;
public:
	//D может обращатся к i и j, принадлежащим к B.
	void setk(){ k=i*j; }
	void showk(){ cout<<k<<"\n"; }
};
int main(){
	D ob;
	ob.set(2,3);//OK, set() открыта в B.
	ob.show();  //OK, show() открыта в B.
	ob.setk();
	ob.showk();
	return 0;
}
