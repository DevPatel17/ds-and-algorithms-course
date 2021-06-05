#include <iostream>
using namespace std;


void printArray(int a[][5], int m, int n)
{

    for(int i{0}; i<m; i++)
    {
        for (int j{0}; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
//    int a[][3] =
//    {
//        {1,2},
//        {4,5,6},
//        {7}
//    }
//  Created an array such as below:
//    1,2,0
//    4,5,6
//    7,0,0


    //Initializing array with all zeroes
//    int zeroArray[10] = {0};
//    int zero2dArray[10][10] = {0};


//note: Giving rows is OPTIONAL but collumns is MANDATORY
    int a[][5] =
    {
        {
            1,2
        },
        {
            3,4
        }
    };

    printArray(a, 2,5);

    return 0;
}
