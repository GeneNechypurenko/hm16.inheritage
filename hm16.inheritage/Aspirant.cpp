#include "Aspirant.h"

Aspirant::Aspirant(int age, const string name, const string phone, const string institution,
	const string faculty, const string group, const string reserch,
	const string supervisor, const string degree)
	:
	Student(age, name, phone, institution, faculty, group),
	asp{ reserch,supervisor,degree } {}

void Aspirant::DisplayInfo() const
{
	Student::DisplayInfo();
	cout << "POSTGRADUATE STUDIES:" << endl;
	cout << "degree: " << asp.degree << endl;
	cout << "supervisor: " << asp.supervisor << endl;
	cout << "reserch: "  << asp.reserch << endl;
	cout << "____________________" << endl;
}


