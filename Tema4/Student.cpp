#include "Student.h"
#include <iostream>
#include <cstring>
#include <stdexcept>

using namespace std;

// Constructor
Student::Student(int studentId, const char* studentName, int studentAge)
    : id(studentId), age(studentAge) {
    if (!studentName || strlen(studentName) == 0) {
        throw invalid_argument("Name cannot be empty");
    }
    if (studentAge <= 0) {
        throw invalid_argument("Age must be positive");
    }

    name = new char[strlen(studentName) + 1]; // Alocăm memorie pentru nume
    strcpy(name, studentName);
    cout << "Created student " << id << " named " << name << ", aged " << age << endl;
}

// Copy constructor
Student::Student(const Student& other) : id(other.id), age(other.age) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    cout << "Copy constructor called for student " << name << endl;
}

// Move constructor
Student::Student(Student&& other) noexcept : id(other.id), name(other.name), age(other.age) {
    other.name = nullptr; 
    cout << "Move constructor called for student " << id << endl;
}

// Copy assignment operator
Student& Student::operator=(const Student& other) {
    if (this == &other) {
        return *this; // Auto-assign check
    }

    delete[] name; 

    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    age = other.age;

    cout << "Copy assignment operator called for student " << name << endl;
    return *this;
}

// Move assignment operator
Student& Student::operator=(Student&& other) noexcept {
    if (this == &other) {
        return *this; 
    }

    delete[] name; 

    name = other.name; 
    id = other.id;
    age = other.age;

    other.name = nullptr; 

    cout << "Move assignment operator called for student " << id << endl;
    return *this;
}

// Destructor
Student::~Student() {
    delete[] name; 
    cout << "Destructor called for student " << id << endl;
}

// Metoda display
void Student::display() const {
    cout << "Name: " << name << ", ID: " << id << ", Age: " << age << endl;
}
