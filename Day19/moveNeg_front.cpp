#include<iostream>
using namespace std;

int main()
{
    int ele1[100];
    int n;

    cout<<"Enter the size: ";
    cin>>n;

    int ele2[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele1[i];
    }

    int pos = 0;

    for(int i=0;i<n;i++)
    {
        if(ele1[i]<0)
        {
            ele2[pos] = ele1[i];
            pos++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(ele1[i]>=0)
        {
            ele2[pos] = ele1[i];
            pos++;
        }
    }

    cout<<"The array looks like: ";

    for(int i=0;i<n;i++)
    {
        cout<<" "<<ele2[i];
    }

    return 0;
}