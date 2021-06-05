#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{

    Student s1;
    s1.display();

    Student s2;
    s2.display();

    Student *s3 = new Student;
    s3->display();

    // Initialize an object using parameterized constructor
    // note: this parameterized constructor is called instead of default due to function overloading
    Student s4(10);
    s4.display();

}

