// College-App.cpp 

#include "Course.h"
#include "Person.h"
#include "Faculty.h"
#include "Student.h"
#include "Section.h"

int main()
{

    Student* s1 = new Student("Lisa Simpson", "ls@gmail.com", "Music", 4.0);
    Student* s2 = new Student("Bart Simpson", "bs@gmail.com", "Engineering", 3.01);
    Student* s3 = new Student("Homer Simpson", "hs@gmail.com", "Culinary Arts", 1.5);
    Student* s4 = new Student("Marge Simpson", "ms@gmail.com", "English", 3.99);

    Faculty* f1 = new Faculty("Dr. Moriarty", "dm@aol.com", "MBA100", "Mathematical Sc");

    //Course* c1 = new Course("CS2", "Data Structures and Algorithms");

    Section* sec1 = new Section("CS2", "Data Structures and Algorithms",
                              f1, 
                             "S0121", 
                             vector<Student*> {s1, s2, s3, s4});

    cout << "SECTION sec1\n" << sec1->toString() << endl;


    Section* sec2 = new Section("CS3", "Java Programming",
        new Faculty("Dr. Xavier", "xman@gmail.com", "MBA200", "Physics"),
        "S0444",
        vector<Student*> {s1, s2, });

    cout << string(60, '-') << endl;
    cout << "\n\nSECTION sec2\n" << sec2->toString() << endl;


    cout << "Finding Homer (sec2 ?) " << sec2->findStudent("Homer Simpson") << endl;
    cout << "Finding Homer (sec1 ?) " << sec1->findStudent("Homer Simpson") << endl;


    Student* s5 = new Student("Draco Malfoy", "dm@aol.com");
    sec2->addStudent(s5);
    cout << "\n\nSECTION sec2\n" << sec2->toString() << endl;

    sec2->addStudent(s5);
    cout << "\n\nSECTION sec2\n" << sec2->toString() << endl;

    cout << "All done!\n";
}

