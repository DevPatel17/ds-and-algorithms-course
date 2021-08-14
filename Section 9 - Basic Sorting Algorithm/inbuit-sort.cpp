#include<bits/stdc++.h>

// NOTE: #include<bits/stdc++.h is the master header file to include all known c++ libraries
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i{0}; i<n; i++)
    {
        cin>> a[i];
    }

    // this inbuilt function from the 'algorithm' library, can sort an array
    // to use this function, pass in the memory address of the first element in array and then the last
    sort(a, a+n);

    for (int i{0}; i<n; i++)
    {
        cout<< a[i]<< " ";
    }

    return 0;
}
