/*
 * Эта программа содержит две функции main() и myfunc()
 */
#include <iostream>
using namespace std;
void myfunc(); // Прототип myfunc()
int main(){
	cout<< "В main()\n";
	myfunc(); // Вызов myfunc()
	cout<< "Снова в main()\n";
	return 0;
}
//Это определение функции
void myfunc(){
	cout<< "Внутри myfunc()\n";
}
