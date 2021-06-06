#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
    Student s1(10,100); // -> parameterized constructor is called

    s1.display();

    //creating copy of object statically
    Student s2(s1); // -> copy constructor is called

    s2.display();


    Student *s3 = new Student(20,200);

    cout<<"s3: ";
    s3->display();

    //creating copy of object dynamically

    Student *s4 = new Student(*s3); // creating dynamic copy of dynamic obj

    Student s5(*s3); // creating static copy of dynamic obj

    Student *s6 = new Student(s1); // creating dynamic copy of static obj

    s4->display();
    s5.display();
    s6->display();

    return 0;
}

/***
    Class:
1) Default Constructor
2) Copy Constructor
3) Copy Assignment Operator
4) Destructor


***/
