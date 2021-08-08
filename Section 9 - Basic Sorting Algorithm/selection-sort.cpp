#include <iostream>
using namespace std;


/** Selection sort for an array of length n:
     - start at index i = 0
     - compare all the elements of index i + 1 up till n - 1
     - if index of i is greater than any of the next elements, swap them
     - increase the value of i by 1
     - repeat from second bullet point

**/

void selectionSort(int a[], int n)
{

// 5 3 1 2 1
    for(int i{0}; i<=n-2; i++)
    {
        int smallest_pos = i;
        for(int j{i+1}; j<=n-1; j++)
        {
            if(a[j] < a[smallest_pos])
            {
                smallest_pos = j;
            }

        }
        swap(a[i], a[smallest_pos]);

    }

}

int main()
{


    int n;
    cin >> n;

    int a[n];

    for(int i{0}; i<n; i++ )
    {
        cin >> a[i];
    }

    selectionSort(a,n);

    for(int i{0}; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}
