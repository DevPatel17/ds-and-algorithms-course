#include <iostream>
#include <cstring>
using namespace std;


bool mystrcmp(char str1[], char str2[])
{

    if(strlen(str1) != strlen(str2))
    {
        return false;
    }

    for(int i{0}; i<strlen(str1); i++)
    {
        if(str1[i]!= str2[i])
        {
            return false;
        }
    }

    return true;

}

int main()
{
    char str1[100] = "abcd";
//    cin>>str1;

    int length = strlen(str1);

    cout<<"LENGTH: "<<length<<endl;

    char str2[100]="def";
    // cin>>str2;

//    if(mystrcmp(str1,str2))
//    {
//        cout<<"EQUAL";
//    }
//    else
//    {
//        cout<<"NOT EQUAL";
//    }

    cout<<"STRING ONE: "<<str1<<" "<<"STRING TWO: "<<str2<<endl;

    strcpy(str1,str2);

    cout<<"STRING ONE: "<<str1<<" "<<"STRING TWO: "<<str2<<endl;

    strcat(str1,str2);

    cout<<"STRCAT: "<< strcat;

    return 0;
}
