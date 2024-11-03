#include "Student.h"
#include <iostream>
#include <string>
using namespace std;


// constructor
Student::Student(int id, const string& name, int year)
    : id(id), name(name), year(new int(year)) 
{
    cout<<"Created student named "<<name<<" with id "<<id<< " in year "<<year;
}

// copy constructor
Student::Student(const Student& t) 
    : id(t.id), name(t.name), year(new int(*t.year)) 
{
    cout << "Copy constructor called for the student named " << name << endl;
}

// move constructor
Student::Student(Student&& t) 
    : id(t.id), name(std::move(t.name)), year(t.year)
{
    t.year = nullptr; 
    cout << "Move constructor called for the student named " << name << endl;
}

// destructor
Student::~Student() 
{
    delete year;
    cout << "Destructor called for the student named " << name << endl;
}

// printing student's data
void Student::display() 
{
    cout<<"The name is "<<name<<",id "<<id<<" and year "<<(year ? *year : 0)<<endl;
}


