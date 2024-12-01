#include "Student.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// constructor
Student::Student(int studentId, const string& studentName, int studentAge)
    : id(studentId), name(studentName), age(studentAge) 
{
    if (studentName.empty()) {
        throw invalid_argument("Name is empty");
    }
    if (studentAge <= 0) {
        throw invalid_argument("Age must be > 0");
    }
    if (studentId <= 0) {
        throw invalid_argument("ID must exist");
    }
    cout << "Created student " << id << " named " << name << ", aged " << age << endl;
}

// copy constructor for item 12
Student::Student(const Student& other)
    : id(other.id), name(other.name), age(other.age) 
{
    cout << "Copy constructor called for student " << name << endl;
}

// assignment operator 
Student& Student::operator=(const Student& other) {
    // self-assignment - item 11
    if (this == &other) {
        return *this;
    }

    // copy all parts of the object - item 12
    name = other.name;
    age = other.age;

    cout << "Assignment operator called for student " << name << endl;

    // item 10
    return *this;
}

// destructor
Student::~Student() {
    cout << "Destructor called for the student named " << name << endl;
}

void Student::display() const {
    cout << "Name: " << name << ", ID: " << id << ", Age: " << age << endl;
}
