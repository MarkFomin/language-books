/*
 * Проект 12-1
 * Шаблонный класс очереди.
 */
#include<iostream>
using namespace std;
const int maxQsize = 100;
// Далее создается родовой класс очереди.
template <class QType> class Queue {
	QType q[maxQsize];//массив для хранения очереди
	int size;//максимальное число элментов, которые могу находиться в очереди
	int putloc, getloc;//индексы "положить" и "взять"
public:
	// Сконструируем очередь конкретной длинны.
	Queue(int len){
		// Размер очереди должен быть меньше max и положительным.
		if(len>maxQsize) len=maxQsize;
		else if (len<=0) len=1;
		size=len;
		putloc=getloc=0;
	}
	// Поместим данные в очередь.
	void put(QType data){
		if(putloc==size){
			cout<<"Очередь полна\n";
			return;
		}
		putloc++;
		q[putloc]=data;
	}
	// Извлечем данные из очереди.
	QType get(){
		if(getloc==putloc){
			cout<<"Очередь пуста\n";
			return 0;
		}
		getloc++;
		return q[getloc];
	}
};
// Демонстрация родового класса Queue.
int main(){
	// Создадим две очереди целых чисел.
	Queue<int> iQa(10), iQb(10);
	int i;
	for(i=0;i<3;i++){
		iQa.put(i+1);
		iQb.put((i+1)*10);
	}
	cout<<"Содержимое очереди целых чисел iQa:\n";
	for(i=0;i<3;i++){
		cout<<iQa.get()<<" ";
	}
	cout<<"\n";
	cout<<"Содержимое очереди целых чисел iQb:\n";
	for(i=0;i<3;i++){
		cout<<iQb.get()<<" ";
	}
	cout<<"\n";
	// Создадим две очереди чисел с плавающей точкой.
	Queue<double> dQa(10), dQb(10);
	for(i=0;i<3;i++){
		double d=i+1;
		dQa.put(d+d/100);
		dQb.put(d*10+d/100);
	}
	cout<<"Содержимое очереди чисел с плавающей точкой dQa:\n";
	for(i=0;i<3;i++){
		cout<<dQa.get()<<" ";
	}
	cout<<"\n";
	cout<<"Содержимое очереди чисел с плавающей точкой dQb:\n";
	for(i=0;i<3;i++){
		cout<<dQb.get()<<" ";
	}
	cout<<"\n";
	return 0;
}
