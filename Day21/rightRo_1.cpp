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

    int temp = ele[N-1];

    for(int i=N-2;i>=0;i--)
    {
        ele[i+1] = ele[i];
    }

    ele[0]  = temp;

    cout<<"The output array: ";

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i];
    }

    return 0;
}