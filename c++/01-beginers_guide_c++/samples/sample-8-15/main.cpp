/*
 * Инкримент и декримент указателя на объект
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
	P_example ob[2], *p;
	ob[0].set_num(10);//непосредственное обращение к объекту
	ob[1].set_num(20);
	p=&ob[0];     //получим указатель на первый элемент
	p->show_num();//выведем значение ob[0] через указатель
	p++;          //продвинимся к следующему объекту
	p->show_num();//выведем значение ob[1] через указатель
	p--;          //вернемся к предыдущему объекту
	p->show_num();//снова выведем значение объекта ob[0]
	return 0;
}
