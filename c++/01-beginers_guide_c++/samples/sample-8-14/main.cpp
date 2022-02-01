/*
 * Простой пример использования указателя на объект.
 */
#include<iostream>
using namespace std;
class P_example{
	int num;
public:
	void set_num(int val){num=val;}
	void show_num(){cout<<num<<"\n";}
};
int main(){
	P_example ob, *p;//объявим объект и указатель на него
	ob.set_num(1);//вызов функции непостредственно через ob
	ob.show_num();
	p=&ob;//присвоим p значение адреса ob
	p->set_num(20);//вызов функции посредством указателя на ob
	p->show_num();
	return 0;
}
