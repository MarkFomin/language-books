/*
 * Проект 8-2
 * Класс очереди символов.
 */
#include<iostream>
using namespace std;
const int maxQsize = 100;
class Queue {
	char q[maxQsize];		//массив для хранения очереди
	int size;						//максимальное число элементов,
											//которые могут находится в очереди
	int putloc, getloc;	//индексы "положить" и "взять"
public:
	// Сконструируем очередь конкретной длины.
	Queue(int len){
		// Размер очереди должен быть меньше maxQsize и положителен.
		if (len>maxQsize) len=maxQsize;
		else if (len<=0) len=1;
		size=len;
		putloc=getloc=0;
	}
	// Поместим символ в очередь.
	void put(char ch){
		if(putloc==size){
			cout<<"-- Очередь полна.\n";
			return;
		}
		q[++putloc]=ch;
	}
	// Извлечем символ из очереди.
	char get(){
		if(getloc==putloc){
			cout<<"-- Очередь пуста.\n";
			return 0;
		}
		return q[++getloc];
	}
};
// Демонстрация класса очереди.
int main(){
	Queue bigQ(100);
	Queue smallQ(4);
	char ch;
	int i;
	cout<<"Используем bigQ для хранения латинского алфавита.\n";
	//поместим в bigQ буквы алфавита
	for(i=0;i<26;i++){
		bigQ.put('A'+i);
	}
	//извлечем и выведем на экран элемента из bigQ
	cout<<"Содержимое bigQ:\n";
	for(i=0;i<26;i++){
		ch=bigQ.get();
		if(ch!=0) cout<<ch;
	}
	cout<<"\n\n";
	
	cout<<"Используем smallQ для демонстрации ошибок.\n";
	//теперь используем smallQ для демонстрации ошибок
	for(i=0;i<5;i++){
		ch='Z'-i;
		cout<<"Пытаемся записать "<<ch;
		smallQ.put(ch);
		cout<<"\n";
	}
	cout<<"\n";
	//другая ошибка
	cout<<"Содержимок smallQ: ";
	for(i=0;i<5;i++){
		ch=smallQ.get();
		if(ch!=0) cout<<ch;
	}
	cout<<"\n";
	return 0;
}
