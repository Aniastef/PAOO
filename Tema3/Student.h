#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;

public:
    // constructor
    Student(int id, const string& name, int age);

    // copy constructor (12)
    Student(const Student& other);

    // assignment operator (10, 11, 12)
    Student& operator=(const Student& other);

    // destructor
    ~Student();

    void display() const;
};

#endif
