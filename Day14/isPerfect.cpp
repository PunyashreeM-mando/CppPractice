#include<iostream>
using namespace std;

bool isPerfect(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    bool R = isPerfect(n);

    if(R==true)
    {
        cout<<"Perfect number"<<endl;
    }

    if(R==false)
    {
        cout<<"Not perfect number"<<endl;
    }

    return 0;
}

bool isPerfect(int N)
{
    int perfectSum=0;

    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            perfectSum+=i;
        }
    }

    if(perfectSum==N)
    {
        return true;
    }

    else
    {
        return false;
    }
}