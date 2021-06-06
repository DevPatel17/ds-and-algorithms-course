#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
    Student s1(10,100);
    Student s2(20,200);
    Student *s3 = new Student;

    s2 = s1;
    *s3 = s1;
    s2 = *s3;

    delete s3; // dynamic objects need to be destroyed using

    return 0;   // destructor will be called here 3 times, once for every static object and for every time delete is used
    //- destructor IS NOT called for dynamically allocated objects if delete is not called
}
