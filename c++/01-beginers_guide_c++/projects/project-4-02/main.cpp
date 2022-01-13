/*
	Проект 4-2
	Переворачивание строки.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{	
	char str[] = "this test of programm";
	char *start, *end;
	int len;
	char t;
	
	cout << " Исходная: " << str << "\n";
	
	len = strlen(str);
	
	start = str;
	end = &str[len-1];
	
	while(start<end){
		// обменяем символы
		t = *start;
		*start = *end;
		*end = t;
		
		//продвинем указатели
		start++;
		end--;
	}
	
	cout << " Перевернутая: " << str << "\n";
	
	
	setlocale(LC_ALL, "en_US.utf8");
	char multi_str[] = "Тест123";
	int size = strlen(multi_str);
	char ch[3];
	for(int i=0; i<size; i++){
		int char_start = i;
		int char_size = 1;
		int res = -1;
		while(res<1 && i<size){
			res = mbrlen(multi_str+i, 1, NULL);
			if(res<1){
				char_size++;
				i++;
			}
		}
		memcpy(&ch, multi_str+char_start, char_size);
		ch[char_size]=0;
		cout << ch << "\n";
	}
	
	return 0;
}
