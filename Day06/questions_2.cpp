#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    /*for(int i=1;i<=N;i++)
    {
        cout<<i<<endl;
    }

    for(int i=N;i>=1;i--)
    {
        cout<<i<<endl;
    }

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }

     for(int i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    for(int i=1;i<=N;i++)//square of every number
    {
        cout<<i*i<<endl;
    }*/

     for(int i=1;i<=N;i++)//cube of every number
    {
        cout<<i*i*i<<endl;
    }

    return 0;
}