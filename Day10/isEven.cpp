#include<iostream>
using namespace std;

bool isEven(int N);

int main()
{
    int N;
    cout<<"Enter the value of n: ";
    cin>>N;

    bool R = isEven(N);

    if(R == true)
    {
        cout<<"Number is even"<<endl;
    }

    else
    {
        cout<<"Number is odd"<<endl;
    }

    return 0;
}   

bool isEven(int N)
{
    if(N%2==0)
    {
        return true;
    }

    else
    {
        return false;
    }
}
