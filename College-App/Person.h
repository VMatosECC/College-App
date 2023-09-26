#pragma once
#include "mylibraries.h"

class Person
{
private:

    string name, email;

public:
    void setName(string nameVal) { name = nameVal; }
    void setEmail(string emailVal) { email = emailVal; }

    string getName() { return name; }
    string getEmail() { return email; }

    Person(string nameVal = "na", string emailVal = "na") {
        setName(nameVal);
        setEmail(emailVal);
    }

    virtual string toString() {
        stringstream sout;
        sout << " Person [Name: " << getName() << ", Email: " << getEmail() << "]";
        return sout.str();
    }
};

