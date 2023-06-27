#pragma once
#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

class Aspirant : public Student
{
private:

    struct Asp {
        string reserch;
        string supervisor;
        string degree;
    };
    Asp asp;

public:
    Aspirant(int age, const string name, const string phone, const string institution,
        const string faculty, const string group, const string reserch,
        const string supervisor, const string degree);

    void DisplayInfo()const;
};

