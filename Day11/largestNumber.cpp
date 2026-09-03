#include<iostream>
using namespace std;

int largestNumber(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R =  largestNumber(n);

    if(R==-1)
    {
        cout<<"No such nummber found"<<endl;
    }

    else
    {
        cout<<"The largest number which is divisible by 7 is: "<<R<<endl;
    }

    return 0;
}

int largestNumber(int N)
{
    for(int i=N;i>=1;i--)
    {
        if(i%7==0)
        {
            return i;
        }
    }

    return -1;
}