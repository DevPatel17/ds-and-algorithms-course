#include <iostream>
using namespace std;

//Access Modifiers:

//public: Can be used anywhere
//
//private: Can only be used inside the class (By default, set to private if access modifiers is not defined)
//
//protected:


class Student
{

// private: //No need to write private since it will already be set by default
    int age;

public:

    /** (default) Constructor funtion - same name as class name, no return argument (for default cons.), no parameters (inputs)

    - purpose: initializes properies of an object with default values
    - constructor is only called once, during the creation of new object
    - every class has an 'internal constructor', when you create your own the internal constructor is no longer used/called

    **/

    // default contructor

    Student() {
        cout<<"constructor called"<<endl;
    }

    // parameterized constructor
    Student(int a) {
    cout<<"para constructor called"<<endl;
    }

    int rollNumber;

    void display()
    {
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge()
    {
        return age;
    }

    void setAge(int value){
        age = value;
    }
};
