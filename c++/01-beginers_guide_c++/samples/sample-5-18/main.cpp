/*
 * Возврат указателя
 */
#include<iostream>
using namespace std;
char const *get_substr(char const *sub, char const *str);
int main(){
	char const *substr;
	substr=get_substr("три", "один два три четыри");
	cout<<"Подстрока найдена: "<<substr<<"\n";
	return 0;
}
// Возвращает указатель на подстроку или нулевой указатель,
// если подстрока не найдена.
char const *get_substr(char const *sub, char const *str){
	char const *p, *p2, *start;
	for(int t=0;str[t];t++){
		p=&str[t];// начальная установка указателей
		start=p;
		p2=sub;
		while(*p2&&*p2==*p){// проверка на наличие подстроки
			p++;
			p2++;
		}
		// если p2 указывает на завершающий 0 (т.е. на конец подстроки),
		// значит, вся подстрока найдена
		if(!*p2){
			return start;// вернуть указатель на начало подстроки
		}
	}
	return 0;// подстрока не найдена
}
