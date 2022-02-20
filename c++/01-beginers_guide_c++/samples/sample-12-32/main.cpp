/*
 * Использование Проекта 12-1 для хранения объектов Sample.
 * Динамически выделяем память под объекты Sample.
 * Шаблонный класс очереди.
 */
#include<iostream>
using namespace std;
class Sample {
	int id;
public:
	Sample(){id=0;}
	Sample(int x){id=x;}
	void show(){
		cout<<id<<" ";
	}
};
const int maxQsize=100;
// Далее создаем родовой класс очереди.
template <class QType> class Queue {
	QType q[maxQsize];//массив для хранения очереди
	int size;//максимальное число элементов, которые могут находится в очереди
	int putloc, getloc;//индексы "положить" и "взять"
public:
	// Сконструируем очередь конкретной длины.
	Queue(int len){
		// Размер очереди должен быть меньше максимального и положителен.
		if(len>maxQsize) len=maxQsize;
		else if(len<=0) len=1;
		size=len;
		putloc=getloc=0;
	}
	// Поместим данные в очередь.
	void put(const QType &data){
		if(putloc==size){
			cout<<"Очередь полна.\n";
			return;
		}
		q[putloc++]=data;
	}
	// Извлечем данные из очереди.
	QType get(){
		if(putloc==getloc){
			cout<<"Очередь пуста.\n";
			return 0;
		}
		return q[getloc++];
	}
};
// Демонстрация родового класса Queue.
int main(){
	Queue<Sample> sampQ(3);
	Sample *o1, *o2, *o3;
	o1=new Sample(1);
	o2=new Sample(2);
	o3=new Sample(3);
	sampQ.put(*o1);
	sampQ.put(*o2);
	sampQ.put(*o3);
	cout<<"Содержимое sampQ: ";
	for(int i=0;i<3;i++){
		sampQ.get().show();
	}
	cout<<"\n";
	delete o1;
	delete o2;
	delete o3;
	return 0;
}
