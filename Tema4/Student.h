#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;
    char* name; 
    int age;

public:
    // Constructor
    Student(int id, const char* name, int age);

    // Copy constructor
    Student(const Student& other);

    // Move constructor
    Student(Student&& other) noexcept;

    // Copy assignment operator
    Student& operator=(const Student& other);

    // Move assignment operator
    Student& operator=(Student&& other) noexcept;

    // Destructor
    ~Student();

    void display() const;
};

#endif
