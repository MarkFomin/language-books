/*
 * Ваша программа содержит список студентов (используется std::list). 
 * Вам необходимо разработать алгоритм поиска студента с определенной фамилией.
 * Для поиска Вы решили применить стандартный алгоритм std::find_if. Для этого 
 * Вам необходимо создать специальный класс Finder, объект которого будет хранить 
 * искомую фамилию и осуществлять операцию сравнения фамилии каждого студента с
 * искомой. Какой метод необходимо определить в классе Finder?
 * 1) bool operator()(Student&);          (x)
 * 2) bool operator==(Student&);
 * 3) bool operator<(Student&, Student&);
 * 4) bool operator==(Student&, Student&);
 * 5) bool operator<(Student&);
 */
#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
class Student {
	string name;
	string surname;
public:
	Student(){}
	Student(const string &n, const string &s):name(n),surname(s){}
	const string &getSurname(){return surname;}
	const string &getName(){return name;}
	void show(){
		cout<<name<<" "<<surname<<endl;
	}
};
class Finder {
	string surname;
public:
	Finder(const string &s):surname(s){};
	bool operator()(Student& stud){
		return surname==stud.getSurname();
	}
};
int main(){
	list<Student> students;
	students.push_back(Student("Tom", "Hanks"));
	students.push_back(Student("Jone", "Loide"));
	students.push_back(Student("Rone", "Forgart"));
	
	Finder finder("Hanks");
	list<Student>::iterator it = find_if (students.begin(), students.end(), finder);
	if(it!=students.end()){
		it->show();
	} else {
		cout<<"Not found.\n";
	}
	return 0;
}
