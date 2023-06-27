#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string number, const string name, const string birthdate,
	const string citizenship, const string visa, const string fpNumber)
	:
	Passport(number, name, birthdate, citizenship),
	fPass{visa, fpNumber} {}

void ForeignPassport::DisplayInfo() const
{
	Passport::DisplayInfo();
	cout << "FOREIGN PASSPORT" << endl;
	cout << "number: " << fPass.fpNumber << endl;
	cout << "visa: " << fPass.visa << endl;
	cout << "____________________" << endl;
}
