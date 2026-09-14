#include<iostream>
using namespace std;

int main()
{
    string str;

    //str = "HELLO";

    cin>>str;

    cout<<"The characters in the string are: "<<endl;

    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }

    return 0;
}