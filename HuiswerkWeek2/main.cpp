#include <iostream>
#include <string>
#include "Student.h"
#include "Docent.h"

using namespace std;

int main() {
	Student* s = new Student;
	Docent* d = new Docent;	
	s->getName();
	s->getAge();
	s->Time();
	std::cout << "-------------" << endl;
	d->getName();
	d->getAge();
	d->Amount();
	std::cout << "-------------";
	string y;
	getline(cin, y);

	return 0;
}