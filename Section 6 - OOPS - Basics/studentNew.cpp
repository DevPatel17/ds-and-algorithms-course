#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{

    Student s1; // constructor 1 called

    Student s2(100); // constructor 2 called

    Student s3(10,100); // constructor 3 called

    Student s4(s3); // constructor 3 called

    s1 = s2; // copy assignment called

    Student s5 = s3; //compiler will optimize this line and call copy constructor only instead of constructor 1 and then copy assignment operator

//    Student s2;
//    s2.display();
//
//    Student *s3 = new Student;
//    s3->display();
//
//    // Initialize an object using parameterized constructor
//    // note: this parameterized constructor is called instead of default due to function overloading
//    Student s4(10, 150);
//    s4.display();
}

