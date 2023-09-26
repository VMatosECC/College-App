#pragma once
#include "mylibraries.h"

class Course
{
private:

    string cId, cName;

public:
    void setCid(string cIdVal) { cId = cIdVal; }
    void setCname(string cNameVal) { cName = cNameVal; }

    string getCid() { return cId; }
    string getCname() { return cName; }

    Course(string cIdVal = "na", string cNameVal = "na") {
        setCid(cIdVal);
        setCname(cNameVal);
    }

    virtual string toString() {
        stringstream sout;
        sout << " Course [cId: " << getCid() << ", cName: " << getCname() << "]";
        return sout.str();
    }


};


