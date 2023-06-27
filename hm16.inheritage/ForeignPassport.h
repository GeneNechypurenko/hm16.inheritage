#pragma once
#include <iostream>
#include <string>

#include "Passport.h"

using namespace std;

class ForeignPassport:public Passport
{
private:
	struct FPass {
		string visa;
		string fpNumber;
	};
	FPass fPass;

public:
	ForeignPassport(const string number, const string name, const string birthdate,
		const string citizenship, const string visa, const string fpNumber);

	void DisplayInfo()const;
};

