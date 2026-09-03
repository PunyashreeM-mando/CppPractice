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
    
    int temp;
    for(int i=0;i<N/2;i++)
    {
        temp = ele[i];
        ele[i] = ele[N-i-1];
        ele[N-i-1] = temp;
    }

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i]<<" ";
    }

    return 0;
}