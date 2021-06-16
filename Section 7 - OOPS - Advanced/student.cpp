#include <iostream>
#include <cstring>
using namespace std;

class Student
{

    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // this->name = name; // this here makes a shallow copy
        this->name = new char[strlen(name)+ 1]; //we do +1 to keep an index for the null character
        strcpy(this->name, name);  //this here makes a hard copy

    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};

int main()
{
    char name[] = "Bob";
    Student s1(20, name);
    s1.display();           /// prints: "20 Bob"

    name[2]='e';
    Student s2(30, name);
    s2.display();          /// prints: "30 Boe"

    s1.display();          /// prints: "20 Boe"
                        /**
                            this is because we have made a SHALLOW copy --> look above on where shallow copy is being done
                                - Shallow copy: only address of 0th index of array is copied and not the values
                                - Deep copy: Copies the entire array
                        **/

    return 0;
}
