#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int* year;

public:
    // constructor
    Student(int id, const string& name, int year);

    // copy constructor
    Student(const Student& t);

    // move constructor
    Student(Student&& t);

    // destructor
    ~Student();

    // printing student's data
    void display();
};

#endif