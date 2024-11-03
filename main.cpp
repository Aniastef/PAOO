
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    //creare student
    Student s1(12345, "Istvan Stefania", 4);

    //facem o copie a s1 prin copy constructor
    Student s2 = s1;

    //mutam s1 in s3 prin intermediul move constructor
    Student s3 = move(s1);

    //afisam s2 si s3
    cout << "s2 (made through copy constructor)" << endl;
    s2.display();

    cout << "s3 (made through move constructor)" << endl;
    s3.display();

    //afisam s1
    cout << "s1 (after being moved)" << endl;
    s1.display();

    return 0;
}