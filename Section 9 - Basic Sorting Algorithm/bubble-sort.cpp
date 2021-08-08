#include <iostream>
using namespace std;

// For n items, compare every element beside each other
// If the element on smaller index is greater, swap
// Needs to run n-1 times for n items to guarantee a sorted array

void bubblesort(int a [], int n)
{
    // time complexity = O(n^2)

    // number of total steps = (n - 1)*(n - 2) = n^2 - 3n + 2

    // runs n - 1 times
    for (int count{1}; count < n; count++)
    {
        // runs n - 2 times
        for(int j{0}; j<n-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }

}

int main()
{
    int n;
    cin>> n;

    int a[n];
    for (int i{0}; i < n; i++)
    {
        cin>>a[i];
    }


    bubblesort(a,n);

    for (int i{0}; i < n; i++)
    {
        cout<<a[i];
    }

    return 0;

}
