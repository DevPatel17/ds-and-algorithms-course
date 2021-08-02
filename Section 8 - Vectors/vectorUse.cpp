#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main ()
{
    vector<int> *vp = new vector<int>(); //dynamic --> we will have to worry about deleting this
    vector<int> v; //static -> will delete itself when scope is left

    vector<int> v2(10, -2); // initializes a vector of capacity 10 with all elements being -2

    for(int i{0}; i<v2.size(); i++){
        cout<<v2.at(i)<<endl;
    }

    sort(v2.begin(), v2.end()); // inbuilt function to sort a vector

//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//
//    v[1] = 100;

//    cout<<v[0]<<endl;
//    cout<<v[1]<<endl;
//    cout<<v[2]<<endl;

// NOTE: never use '[]' to insert new elements -> always use .push_back();
//    v[4] = 1002;
//    v[5] = 1234;

//    v.push_back(23);
//    v.push_back(234);
//
//    v.pop_back();
//    v.pop_back();

 //   cout<<v.at(4)<<endl;
 //   cout<<v.at(6)<<endl; // .at() is safer than using '[]' since it will throw an error if the index memory does not belong to the vector

    for(int i{0}; i < 100; i++){

        cout<<"Size: "<<v.size()<<endl; //will output the number of elements
        cout<<"Capacity: "<<v.capacity()<<endl; // will output the total capacity of the vector (note: vectors double in size after they are filled)

        v.push_back(i+1);
    }

//    for(int i{0}; i < v.size(); i++){
//        cout<<v.at(i)<<endl;
//    }

//    cout<<v[0]<<endl;
//    cout<<v[1]<<endl;
//    cout<<v[2]<<endl;
//    cout<<v[3]<<endl;
//    cout<<v[4]<<endl;
//    cout<<v[5]<<endl;
//    cout<<v[6]<<endl;





    return 0;
}

