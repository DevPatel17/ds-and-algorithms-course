#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int age;

public:
    char *name;

    Student(const Student s){ // purpose of const here is
        this->age = s.age;
        this->name = s.name; //creates a shallow copy

        //code below will create a deep copy
        this->name = new char(strlen(s.name)+1);
        strcpy(this->name, s.name);

    }

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

    Student s2(s1); // copy constructor called
    s2.name[0] = 'x'; // both s1 and s2 will be stored as "xob"
                        // -> since default copy constructor is making a shallow copy which points to the same address as S1
    s1.display();
    s2.display();

//    name[2]='e';
//    Student s2(30, name);
//    s2.display();          /// prints: "30 Boe"

//    s1.display();          /// prints: "20 Boe"
    /**
        this is because we have made a SHALLOW copy --> look above on where shallow copy is being done
            - Shallow copy: only address of 0th index of array is copied and not the values
            - Deep copy: Copies the entire array
    **/

    return 0;
}
