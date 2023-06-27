#include "Student.h"

Student::Student(int age, const string name, const string phone, const string institution,
	const string faculty, const string group)
	:
	stud{ age, name, phone, institution, faculty, group} {}

void Student::DisplayInfo() const
{
	cout << "____________________" << endl;
	cout << "institution: " << stud.institution << endl;
	cout << "faculty: " << stud.faculty << endl;
	cout << "group: " << stud.group << endl;
	cout << "name: " << stud.name << endl;
	cout << "age: " << stud.age << endl;
	cout << "phone: " << stud.phone << endl;
}
