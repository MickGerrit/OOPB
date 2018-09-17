#pragma once
#include <string>
class Lesson {
	private:
		int day, classroom;
		std::string lesson;
		float time, length;
	public:
		//This is the method that defines the lesson. What day, time, length,
		//lesson name and classroom it has? Those variables are needed to be filled in
		MakeLesson(int day, float time, float length, std::string lesson, int classroom);
}
class Arrangement {
	//Here someone can arrange and choose the amount of the lessons manually
	Lesson::MakeLesson(int day, float time, float length, std::string lesson, int classroom) {
		day = 0; //0 equals monday
		time = 12.5;
		length = 2.5;
		lesson = "Game Dev";
		classroom = 168;
		//print
	}
	Lesson::MakeLesson(int day, float time, float length, std::string lesson, int classroom) {
		day = 1; //1 equals tuesday
		time = 10;
		length = 1.75;
		lesson = "OOPB";
		classroom = 168;
		//print
	}
	Lesson::MakeLesson(int day, float time, float length, std::string lesson, int classroom) {
		day = 3; //3 equals thursday
		time = 11;
		length = 1.5;
		lesson = "New Technologies";
		classroom = 177;
		//print
	}
	Lesson::MakeLesson(int day, float time, float length, std::string lesson, int classroom) {
		day = 3; //3 equals thursday
		time = 13.5;
		length = 1.5;
		lesson = "Sell-It";
		classroom = 177;
		//print
	}
	Lesson::MakeLesson(int day, float time, float length, std::string lesson, int classroom) {
		day = 4; //4 equals thursday
		time = 10;
		length = 2.5;
		lesson = "Game Dev";
		classroom = 168;
		//print
	}


}

