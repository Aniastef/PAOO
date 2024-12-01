#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main() {
    try {
       
        Student s1(123, "Istvan Stefania", 21);
        s1.display();

        // copy constructor
        Student s2 = s1; 
        s2.display();

        // assignment operator
        Student s3(456, "Alexandra T", 22);
        s3 = s1; 
        s3.display();

        // self-assignment
        s3 = s3; 

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
