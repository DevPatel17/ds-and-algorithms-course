#include <iostream>
using namespace std;

int main()
{

    cout<<"ENTER SIZE OF ARRAY"<<endl;
    int n;

    cin >> n;
    int arr[n];

    cout<<"ENTER ELEMENTS"<<endl;

    for (int i{0}; i<n; i++)
    {
        cin>>arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    for(int j{0}; j<n-1; j++)
    {
        if(arr[j+1] > largest)
        {
            largest = arr[j+1];
        }
        if(arr[j+1] < largest)
        {
            smallest = arr[j+1];
        }


    }

    cout<<"LARGEST ELEMENT IS: "<<largest<<endl;
    cout<<"SMALLEST ELEMENT IS: "<<smallest<<endl;

    return 0;

}
