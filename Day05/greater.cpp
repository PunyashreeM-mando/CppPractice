#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(b>a)
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
    else
    cout<<a<<" and "<<b<<" both are equal"<<endl;

    return 0;
}