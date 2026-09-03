#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int X;
    cout<<"Enter the number whoes frequency is to be counted: ";
    cin>>X;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int countX=0;

    for(int i=0;i<N;i++)
    {
        if(ele[i]==X)
        {
            countX++;
        }
    }

    cout<<"The frequency is: "<<countX<<endl;

    return 0;
}