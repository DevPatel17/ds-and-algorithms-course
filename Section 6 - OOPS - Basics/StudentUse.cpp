#include <iostream>
#include "student.cpp"
using namespace std;


//int a; -->  creates a memory space of 4 bytes
//
//Student s1; --> creates a memory space of 8 bytes (since two int types are in the class 'Student')

int main()
{
    // create objects statically
    Student s1;
    Student s2;
    Student s3,s4,s5;

    // create object dynamically
    Student *s6 = new Student;


    //s1.age = 24;
    s1.rollNumber = 100;

    s1.display();
    s2.display();

    cout<<"s1 age: "<<s1.getAge()<<endl;
    cout<<"s2 age: "<<s2.getAge()<<endl;


  //  cout<< s1.age <<endl;
    cout<< s1.rollNumber <<endl;

    // To change the value of an object, you can use syntax: (*objName).objProperty = value OR objName->objProperty = value
   // (*s6).age = 23;
    (*s6).rollNumber = 30;

  //  s6->age = 23;
    s6->rollNumber = 30;

    s6->display();

    cout<<s6->getAge();


    return 0;
}
