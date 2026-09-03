#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int n;

    cout<<"Enter the size: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int flag = 1;

    for(int i=1;i<n;i++)
    {
        if(ele[i] < ele[i-1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"Array not sorted"<<endl;
    }

    else
    {
        cout<<"Array is sorted"<<endl;
    }

    return 0;
}