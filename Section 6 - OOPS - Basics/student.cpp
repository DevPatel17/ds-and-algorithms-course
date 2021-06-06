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
    - NOTE: if ONLY a parameterized constructor is used, default (internal) constructor is now not available. If object is initialized without a paramter, no matching constructor error will be thrown
    **/


    /**
        - When a function is called on a function, the (memory) address of the object is also passed
        - This address can be accessed using 'this' keyword

    **/

    // default contructor

    Student() {
        cout<<"constructor called"<<endl;
    }

    // parameterized constructor
    Student(int age) {
        this->age = age; //by using 'this' here, we can utilize an argument of the same name as the property of the object
    cout<<"para constructor called"<<endl;
    }

    Student(int a, int r){
    cout<< "this "<<this<<endl;
    age = a;
    rollNumber = r;

    cout<<"contructor THREE called"<<endl;
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


/**
    Properties of destructors

        - same name as class name
        - no return type
        - no input arguments
        - identified by a '~' symbol

        - unlike constructors, can only have ONE destructor
        - only called once in the lifetime of an object (when the scope of the object is finished)
        - if we create our own destructor, inbuilt destructor is no longer called

**/

    ~Student(){
        cout<<"Destructor called "<<endl;
    }
};
