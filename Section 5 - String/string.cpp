#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
{
    string s = "abc";
    cout<<s<<endl;

    string s2;
    s2 = "def";
    cout<<s2<<endl;

    string *sp = new string;
    *sp = "mno";
    cout<<sp<<endl;  //sp here is a pointer to the start memory that contains the string
    cout<<*sp<<endl; //*sp here is the data stored in that memory space

    vector<string> v;
    v.push_back(s);
    v.push_back("acbdfghe");

    for(int i{0}; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
        sort(v[i].begin(), v[i].end());
        cout<<v[i]<<endl;
    }


    string s3;
    getline(cin, s3);

    cout<<s3<<endl;

    return 0;
}
