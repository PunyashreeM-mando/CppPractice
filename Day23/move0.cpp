#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;

    cout<<"Enter the size: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int pos =0;

    for(int i=0;i<N;i++)
    {
        if(ele[i] != 0)
        {
            ele[pos] = ele[i];
            pos++;
        }
    }

    for(int i=pos;i<N;i++)
    {
        ele[i] = 0;
    }

    cout<<"The final array is: ";

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i];
    }

    return 0;
}