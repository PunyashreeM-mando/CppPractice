#include<iostream>
using namespace std;

int largestDivisibleBy3(int n);

int main()
{
    int N;
    cout<<"Enter the value for N: ";
    cin>>N;

    int R = largestDivisibleBy3(N);

    if(R==-1)
    {
        cout<<"No such number found"<<endl;
    }

    else
    {
        cout<<"The largest number less than N that is divisible by 3: "<<R<<endl;
    }

    return 0;
}

int largestDivisibleBy3(int n)
{
    for(int i=n-1;i>=1;i--)
    {
        if(i%3==0)
        {
            return i;
        }
    }

    return -1;
}