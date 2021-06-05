#include <iostream>
using namespace std;

int main()
{
    int a[100][100]; //a[ROW][COLLUMN]

    int m,n;

    cin>>m>>n;

    for(int i{0}; i<m; i++)
    {
        for(int j{0}; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"ROW-WISE PRINTING"<<endl;

// ROW-WISE PRINTING
        for(int i{0}; i<m; i++)
    {
        for(int j{0}; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"COLLUMN-WISE PRINTING"<<endl;


// COLLUM-WISE PRINTING
    for(int j{0}; j<n; j++){

        for(int i{0}; i<m; i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
