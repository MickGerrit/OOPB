#pragma once
#include <iostream>
#include <string>
#include "Persoon.h"
using namespace std;
//problems with class setup. And I don't know how header files and cpp files really work
class Docent : Persoon {
public:	
	void getName() {
		naam = "Piet";
		cout << "Naam: "<< naam << endl;
	}
	void Amount() {
		aantal = 18;
		cout << "Aantal studenten: " << aantal << endl;
	}
	void getAge() {
		leeftijd = 42;
		cout << "Leeftijd: "<< leeftijd << endl;
	}

};