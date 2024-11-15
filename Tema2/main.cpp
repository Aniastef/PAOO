#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

try{
    //facem un obiect student si printam detaliile
    Student s1( 0, "Istvan Stefania", 21);
    s1.display();

    //Student s2=s1; // copierea e interzisa
    //Student s3(124, "Alexandra T", 22);
    //s3 = s1;        // atribuirea este interzisa

    

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}