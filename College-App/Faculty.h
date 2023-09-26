#pragma once
#include "Person.h"

class Faculty : public Person
{
private:
    string officeNum;
    string department;

public:
    void setOfficeNum(string officeVal) { officeNum = officeVal; }
    void setDepartment(string departmentVal) { department = departmentVal; }

    string getOfficeNum() { return officeNum; }
    string getDepartment() { return  department; }

    Faculty(string nameVal = "na", string emailVal = "na",
        string officeNumVal = "MBA113", string departmentVal = "CS")
        : Person(nameVal, emailVal)
    {
        setOfficeNum(officeNumVal);
        setDepartment(departmentVal);
    }

    string toString()
    {
        stringstream sout;
        sout << Person::toString() << "\n"
            << "Faculty [OfficeNum: " << getOfficeNum()
            << ", Department: " << getDepartment() << "]";
        return sout.str();

    }

};

