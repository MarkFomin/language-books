/*
 * Проект 8-1
 * Преобразование справочной системы из Проекта 3-3
 * в класс Help.
 */
#include<iostream>
using namespace std;
//Класс, инкапсулирующий справочную систему.
class Help {
public:
	void helpon(char what);
	void showmenu();
	bool isvalid(char ch);
};
//Вывод справочной информации.
void Help::helpon(char what){
	switch(what){
		case '1':
			cout<<"Предложение if:\n\n";
			cout<<"if(условие) предложение;\n";
			cout<<"else предложение;\n";
			break;
		case '2':
			cout<<"Предложение switch:\n\n";
			cout<<"switch(выражение) {\n";
			cout<<"\tcase константа\n";
			cout<<"\t\tпоследовательность предложений\n";
			cout<<"\t\tbreak;\n";
			cout<<"\t// ...\n";
			cout<<"}\n";
			break;
		case '3':
			cout<<"Цикл for:\n\n";
			cout<<"for (инициализация; условие; приращение)\n";
			cout<<"предложение;\n";
			break;
		case '4':
			cout<<"Цикл while:\n\n";
			cout<<"while (условие) предложение;\n";
			break;
		case '5':
			cout<<"Цикл do-while:\n\n";
			cout<<"do {\n";
			cout<<"\tпредложение;\n";
			cout<<"} while (условие);\n";
			break;
		case '6':
			cout<<"Предложение break;\n\n";
			cout<<"break;\n";
			break;
		case '7':
			cout<<"Предложение continue:\n\n";
			cout<<"continue;\n";
			break;
		case '8':
			cout<<"Предложение goto:\n\n";
			cout<<"goto метка;\n";
			break;
	}
	cout<<"\n";
}
// Вывод на экран меню справочной системы.
void Help::showmenu(){
	cout<<"Справка по:\n";
	cout<<" 1. if\n";
	cout<<" 2. switch\n";
	cout<<" 3. for\n";
	cout<<" 4. while\n";
	cout<<" 5. do-while\n";
	cout<<" 6. break\n";
	cout<<" 7. continue\n";
	cout<<" 8. goto\n";
	cout<<"Выберите один из пунктов (q для завершения): ";
}
// Возвращает true, если выбор допустим.
bool Help::isvalid(char ch){
	if((ch<'1'||ch>'8')&&ch!='q') return false;
	return true;
}
int main(){
	char choice;
	Help hlpob;// создание экземпляра класса Help
	// Используем объект Help для вывода информации.
	for(;;){
		do{
			hlpob.showmenu();
			cin>>choice;
		} while(!hlpob.isvalid(choice));
		if(choice=='q') break;
		cout<<"\n";
		hlpob.helpon(choice);
	}
	return 0;
}
