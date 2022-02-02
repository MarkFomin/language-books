/*
 * Перегрузка конструкторов.
 */
#include<iostream>
using namespace std;
class Sample {
public:
	int x, y;
	// Перегрузим конструктор по умолчанию.
	Sample(){x=y=0;}
	// Конструктор с одним параметром.
	Sample(int i){x=y=i;}
	// Конструктор с двумя параметрами.
	Sample(int i, int j){x=i; y=j;}
};
int main(){
	Sample t;//активизация конструтора по умолчанию
	Sample t1(5);//используем Sample(int)
	Sample t2(9,10);//используем Sample(int,int)
	cout<<" t.x: "<< t.x<<",  t.y: "<<t.y<<"\n";
	cout<<"t1.x: "<<t1.x<<", t1.y: "<<t1.y<<"\n";
	cout<<"t2.x: "<<t2.x<<", t2.y: "<<t2.y<<"\n";
	return 0;
}
