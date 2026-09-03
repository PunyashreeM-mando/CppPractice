#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;

    int X;
    cout<<"Enter the number to be searched: ";
    cin>>X;

    int flag=0;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        if(ele[i]==X)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"Number found"<<endl;
    }
    else
    {
        cout<<"Number not found"<<endl;
    }

    return 0;
}