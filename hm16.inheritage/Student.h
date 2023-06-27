#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:

	struct Stud {
		int age;
		string name;
		string phone;
		string institution;
		string faculty;
		string group;
	};
	Stud stud;

public:

	Student(int age, const string name, const string phone, const string institution,
		const string faculty, const string group);

	void DisplayInfo()const;
};

