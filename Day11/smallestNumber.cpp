#include<iostream>
using namespace std;

int smallestNumber(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R =  smallestNumber(n);

    if(R==-1)
    {
        cout<<"No such nummber found"<<endl;
    }

    else
    {
        cout<<"The smallest number which is divisible by 7 is: "<<R<<endl;
    }

    return 0;
}

int smallestNumber(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(i%7==0)
        {
            return i;
        }
    }

    return -1;
}