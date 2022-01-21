/*
  Исользование двумерного массива указателей для создания словоря.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char const *dictonary [][2] = {
		"карандаш", "Инструмент для рисования",
		"клавиатура", "Устройство для ввода",
		"ружье", "Плечевое огнестрельное оружие",
		"самолет", "Воздушное судно с неподвижными крыльями",
		"сеть", "Группа соединенных между собой копьютеров",
		"", ""
	};
	
	char word[80];
	int i;
	
	cout << "Введите слово: ";
	cin >> word;
	
	for(i=0;*dictonary[i][0];i++){
		if(!strcmp(word, dictonary[i][0])) {
			cout << dictonary[i][1] << "\n" ;
			break;
		}
	}
	
	if(!*dictonary[i][0]){
		cout << word << " не найдено.\n";	
	}
	
	return 0;
}
