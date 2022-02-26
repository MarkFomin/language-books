/*
 * Какое утверждение верно относительно следующего кода?
 * 1) Он выведет в консоль double (x)
 * 2) Он выведет в консоль int 
 * 3) Он выведет в консоль float
 * 4) Он ничего не выведет
 * 5) Он не скомпилируется
 */
#include<iostream>
using namespace std;
int main(){
	try {
		throw 8.;
	}
	catch(int){cout<<"int"<<endl;return 1;}
	catch(float){cout<<"float"<<endl;return 1;}
	catch(double){cout<<"double"<<endl;return 1;}
}
