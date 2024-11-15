#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    const int id;
    string name;
    int age;


    public:
    
    // constructor - item 4
    Student(int id, const std::string& name, int age);

   
    // destructor - item 5
    ~Student();

    // interzicem copierea si atribuirea - item 6
    Student(const Student&) = delete; // copiere
    Student& operator=(const Student&) = delete; //atribuire

    // printing student's data
    void display();

};

#endif