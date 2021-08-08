
#include <iostream>
using namespace std;

// For n items, compare every element beside each other
// If the element on smaller index is greater, swap
// Needs to run n-1 times for n items to guarantee a sorted array

void bubblesort(int a [], int n)
{
    // time complexity after optimizing = O(n)

    for (int count{1}; count < n; count++)
    {
        bool isSorted{true};
        // runs n - 2 times
        for(int j{0}; j<n - count; j++) // on the first count, the greatest element will be in the last index
        {                                  // similarily, with the second count and second last index
            if (a[j] > a[j+1])                  //  thus, we don't need to loop all the indices every time
            {
                swap(a[j], a[j+1]);
                isSorted = false;
            }
        }
        if(isSorted){ // the array is already sorted
            break;      // thus, we should exit the loop
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
