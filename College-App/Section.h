#pragma once
#include "Faculty.h"
#include "Student.h"
#include "Course.h"

class Section : public Course
{
private:
    string   secNum;
    Faculty* faculty;
    vector<Student*> roster;

public:
    void setSecNum(string secNumVal) { secNum = secNumVal; }
    void setFaculty(Faculty* facultyVal) { faculty = facultyVal; }
    void setRoster(vector<Student*> rosterVal) { roster = rosterVal; }

    string getSecNum() { return secNum; }
    Faculty* getFaculty() { return faculty; }
    vector<Student*> getRoster() { return roster; }

    Section(string cIdVal = "na", string cNameVal = "na", 
        Faculty* facultyVal = {},
        string secNumVal = "S0000",
        vector<Student*> rosterVal = {})
        : Course(cIdVal, cNameVal)
    {
        setSecNum(secNumVal);
        setFaculty(facultyVal);
        setRoster(rosterVal);
    }

    //User-defined methods
    string toString()
    {
        stringstream sout;
        sout << Course::toString()
            << "\nSection [ID: " << getSecNum()
            << "\n" << faculty->toString()
            << "\n Student Roster (" << getRoster().size() << " students)\n";

        for (Student* ps : getRoster()) {
            sout << "\n\t" << ps->toString() << endl;
        }

        return sout.str();


    }

    int findStudent(string sname) {
        for (int i = 0; i < roster.size(); i++)
        {
            if (roster[i]->getName() == sname) return i;
        }
        return -1;
    }

    bool addStudent(Student* s) {
        if (findStudent(s->getName()) == -1) {
            roster.push_back(s);
            return true;
        }
        return false;
    }

};

