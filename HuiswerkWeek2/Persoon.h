#pragma once
#include <iostream>
#include <string>
using namespace std;
//I don't understand what the best ways is to implement yet, for me it is very confusing.
//So I created it in this way and I really don't know if I did it right
class Persoon {
	public:
		int leeftijd;
		string naam;
		int tijd;
		int aantal;
		void getAge();
		void getName();
		void Time();
		void Amount();

};