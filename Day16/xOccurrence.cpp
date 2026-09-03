#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int X;
    cout<<"Enter the number whose occurrence must me erased: ";
    cin>>X;

    int pos = 0;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        if(ele[i]!=X)
        {
            ele[pos] = ele[i];
            pos++;
        }
    }

    cout<<"The array is: ";

    for(int i=0;i<pos;i++)
    {
        cout<<ele[i]<<" ";
    }

    return 0;
}