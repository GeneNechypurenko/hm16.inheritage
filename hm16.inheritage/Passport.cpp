#include "Passport.h"

Passport::Passport(const string number, const string name, const string birthdate, const string citizenship)
	:pass{ number, name, birthdate, citizenship}{}

void Passport::DisplayInfo() const
{
	cout << "____________________" << endl;
	cout << "PASSPORT INFORMATION" << endl;
	cout << "name: " << pass.name << endl;
	cout << "birthdate: " << pass.birthdate << endl;
	cout << "country: " << pass.citizenship << endl;
	cout << "number: " << pass.number << endl;
}
