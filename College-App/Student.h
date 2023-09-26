#pragma once
#include "Person.h"

class Student : public Person
{
private:
    string major;
    double gpa;

public:
    void setMajor(string majorVal) { major = majorVal; }
    void setGpa(double gpaVal) { gpa = gpaVal; }

    string getMajor() { return major; }
    double getGpa() { return  gpa; }

    Student(string nameVal = "na", string emailVal = "na",
        string majorVal = "undeclared", double gpaVal = 0)
        : Person(nameVal, emailVal)
    {
        setMajor(majorVal);
        setGpa(gpaVal);
    }

    string toString()
    {
        stringstream sout;
        sout << Person::toString() << "\n"
            << "Student [Major: " << getMajor()
            << ", GPA: " << getGpa() << "]";
        return sout.str();

    }

};

