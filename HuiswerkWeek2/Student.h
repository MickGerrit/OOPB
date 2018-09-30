#pragma once
#include <iostream>
#include <string>
#include "Persoon.h"
using namespace std;
//problems with class setup. And I don't know how header files and cpp files really work
class Student : Persoon {
public:	
	void getName() {
		naam = "Jan";
		cout << "Naam: " << naam << endl;
	}
	void Time() {
		tijd = 1430;
		cout << "Les begint om: "<<tijd << endl;
	}
	void getAge() {
		leeftijd = 20;
		cout << "Leeftijd: " << leeftijd << endl;
	}

};