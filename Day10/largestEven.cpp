#include<iostream>
using namespace std;

int largestEven(int n);

int main()
{
    int N;
    cout<<"Enter the value for N: ";
    cin>>N;


    int R = largestEven(N);

    if(R==-1)
    {
        cout<<"No such number found"<<endl;
    }

    else
    {
        cout<<"The largest even number is: "<<R<<endl;
    }

    return 0;
}

int largestEven(int n)
{
    if(n<=2)
    {
        return -1;
    }

    for(int i=n-1;i>=1;i--)
    {
        if(i%2==0)
        {
            return i;
        }
    }

    return -1;
}