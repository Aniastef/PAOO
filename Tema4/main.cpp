#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    try {
        Student s1(1, "Alice", 20);
        s1.display();

        cout << "Copy Constructor:" << endl;
        Student s2 = s1; 
        s2.display();

        cout << "Assignment Operator:" << endl;
        Student s3(2, "Bob", 22);
        s3 = s1; 
        s3.display();

        cout << "Move Constructor:" << endl;
        Student s4 = std::move(s1); 
        s4.display();

        cout << "Move Assignment Operator:" << endl;
        Student s5(5, "Temporary", 25);
        s5 = std::move(s3); 
        s5.display();

        
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
