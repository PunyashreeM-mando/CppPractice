#include<iostream>
using namespace std;

int maximum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}

int main()
{
    int a,b;
    cout<<"Enter the values for a and b: ";
    cin>>a>>b;

    int max = maximum(a,b);
    cout<<"The maximum number is: "<<max<<endl;

    return 0;
}