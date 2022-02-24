/*
 * Каков вывод в консоль у следующей программы?
 * 1) Bill gone
 *    Unknown gone
 *    Unknown gone
 * 2) Unknown gone (x)
 *    Unknown gone
 * 3) Bill gone
 *    Unknown gone
 * 4) Unknown gone
 * 5) Bill gone
 *    Unknown gone
 *    Unknown gone
 *    Carl gone
 */
#include<iostream>
#include<string>
using namespace std;
class Man {
	string name_;
public:
	Man():name_("Unknown"){};
	Man(const string &name):name_(name){};
	~Man(){cout<<name_<<" gone"<<endl;}
};
int main(){
	try {
		static Man man1("Bill");
		Man mans[2];
		throw 5;
		Man man4 = string("Carl");
	} catch(...){
	}
	cin.get();
	return 0;
}
