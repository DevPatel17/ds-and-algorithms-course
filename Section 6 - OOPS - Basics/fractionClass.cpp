#include <iostream>
#include <algorithm> //for __gcd()
using namespace std;

class Fraction
{

private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout<<this->numerator<<"/"<<denominator<<endl; //using "this->" is optional here
    }

    /***
    reference variables:

    - denoted by '&' symbol
    - used to avoid copying, and instead has multiple variables storing the exact same data
    - ex:
    int x{0};
        int &y = x; //created a reference of x
    y++;
    cout<<x<<" "<<y<<endl;  // will print "1 1" since x AND y have both been incremented when y was incremented
    x++;
    cout<<x<<" "<<y<<endl; // will print "2 2" since x AND y have both been incremented when x was incremented

    To stop reference variable from being able to read AND write data, const keyword can be used

    ex:
    int x{0}
    int const &y = x; // now, value of y cannot be updated through y, only through x. y can still read value of x

    ***/
    void add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator; // again, using "this->" is optional here

        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int num = x * this->numerator + y * f2.numerator;


        // store result in f1
        this->numerator = num;
        this->denominator = lcm;

        this->simplify();
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);

        for (int i{1}; i<=j; i++)
        {
            if(numerator%i == 0 && denominator%i == 0)
            {
                gcd = i;
            }
        }

        //optional: use inbuilt function for gcd instead:

        // int c = __gcd(a,b); Note: needs algorithm library to be included above


        this->numerator = (this->numerator)/gcd;

        denominator = denominator/gcd;


    }

    void multiply(Fraction const &f2)
    {
        this->numerator = this->numerator * f2.numerator;
        this->denominator = this->denominator * f2.denominator;

        this->simplify();

    }

};


int main()
{
    Fraction f1(1, 20);

    Fraction f2(2,12);

//    f1.add(f2);
//
//    f1.print();
//
//    f1.add(f2);
//
//    f1.print();

    f1.multiply(f2);

    f1.print();

    return 0;
}

