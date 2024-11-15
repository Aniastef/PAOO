#include "Student.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


// constructor - item 4 - initializam atributele prin lista constructorului si ne asiguram ca nu sunt goale
Student::Student(int studentId, const string& studentName, int studentAge)
    : id(studentId), name(studentName), age(studentAge) 
{
    if (studentName.empty())
    {
        throw invalid_argument(" Name is empty ");
    }

    if (studentAge <= 0) 
    {
        throw invalid_argument(" Age must be > 0 ");
    }

    if (studentId <= 0) 
    {
        throw invalid_argument(" ID must exist ");
    }
        cout<<"Created student " << id<<  " named " <<name<<", aged "<<age<<endl;
    }


// destructor - item 5 - l-am definit noi, altfel ar fi fost generat cel default (~Student() = default;)
Student::~Student() 
{
    cout << "Destructor called for the student named " << name << endl;
}

// printing student's data
void Student::display() 
{
    cout<<"name: " <<name<<" id: "<<id<<" age: "<<age<<endl;
}


