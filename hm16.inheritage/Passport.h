#pragma once
#include <iostream>
#include <string>

using namespace std;

class Passport
{
protected:
	struct Pass {
		string number;
		string name;
		string birthdate;
		string citizenship;
	};
	Pass pass;

public:
	Passport(const string number, const string name, const string birthdate, const string citizenship);

	void DisplayInfo() const;
};

