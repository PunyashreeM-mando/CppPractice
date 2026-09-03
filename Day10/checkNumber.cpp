#include<iostream>
using namespace std;

int checkNumber(int N);

int main()
{
    int N;
    cout<<"Enter the value for N: ";
    cin>>N;

    int R = checkNumber(N);

    if(R==1)
    {
        cout<<"Number is positive"<<endl;
    }

    else if(R==-1)
    {
        cout<<"Number is negative"<<endl;
    }

    else
    {
        cout<<"Number is zero"<<endl;
    }
}

int checkNumber(int N)
{
    if(N>0)
    {
        return 1;
    }

    else if(N<0)
    {
        return -1;
    }

    else
    {
        return 0;
    }
}
