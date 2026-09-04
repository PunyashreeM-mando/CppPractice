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

    temp = ele[0];

    for(int i=1;i<N;i++)
    {
        ele[i-1] = ele[i];
    }

    ele[N-1] = temp;
    
    cout<<"The otuput array is: ";

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i];
    }

    return 0;
}