/*
 * Добавление исключения в Проект 12-1
 * Шаблонный класс очеради.
 */
#include<iostream>
#include<cstring>
using namespace std;
// Это исключение выбрасываемое Queue в случае ошибки.
class QExcpt {
public:
	char msg[80];
};
const int maxQsize = 100;
// Далее создаем родовой класс очереди.
template <class QType> class Queue {
	QType q[maxQsize];//массив для хранения очереди
	int size;//максимальное число элементов, которые могут находится в очереди
	int putloc, getloc;//индексы "положить" и "взять"
	QExcpt Qerr;// Добавим поле ислючения
public:
	// Сконструируем очередь конкретной длинны.
	Queue(int len){
		// Размер очереди должен быть меньше максимального и положителен.
		if(len>maxQsize)len=maxQsize;
		else if(len<=0)len=1;
		size=len;
		putloc=getloc=0;
	}
	// Поместим данные в очередь.
	void put(QType data){
		if(putloc==size){
			strcpy(Qerr.msg, "Очередь полна.\n");
			throw Qerr;
		}
		q[putloc++]=data;
	}
	// Извлечем данные из очереди.
	QType get(){
		if(getloc==putloc){
			strcpy(Qerr.msg, "Очередь пуста.\n");
			throw Qerr;
		}
		return q[getloc++];
	}
};
// Демонстрация родового класса Queue.
int main(){
	//заметьте. что экземпляр iQa имеет только два элемента
	Queue<int> iQa(2), iQb(10);
	int i;
	for(i=0;i<3;i++){
		try {
			iQb.put((i+1)*10);
			iQa.put(i+1);
		} catch (QExcpt err){
			cout<<err.msg<<"\n";
		}
	}
	cout<<"Содержимое целочисленной очереди iQa: \n";
	for(i=0;i<3;i++){//здесь будем антипереполнение!
		try {
			cout<<iQa.get()<<" ";
		} catch (QExcpt err){
			cout<<err.msg<<"\n";
		}
	}
	cout<<"\n";
	cout<<"Содержимое целочисленной очереди iQb: \n";
	for(i=0;i<3;i++){
		try {
			cout<<iQb.get()<<" ";
		} catch (QExcpt err){
			cout<<err.msg<<"\n";
		}
	}
	cout<<"\n";
	try {
		Queue<double> dQa(10), dQb(10);//создадим две очереди double
		for(i=0;i<3;i++){
			dQa.put((i+1)+(i+1)/100.0);
			dQb.put((i+1)*10.0+(i+1)/100.0);
		}
		cout<<"Содержимое очереди чисел с плавающей запятой dQa: \n";
		for(i=0;i<3;i++){
			cout<<dQa.get()<<" ";
		}
		cout<<"\n";
		cout<<"Содержимое очереди чисел с плавающей запятой dQb: \n";
		for(i=0;i<3;i++){
			cout<<dQb.get()<<" ";
		}
		cout<<"\n";
	} catch (QExcpt err){
		cout<<err.msg<<"\n";
	}
}
