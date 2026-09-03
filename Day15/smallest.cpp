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

    int min = ele[0];

    for(int i=1;i<N;i++)
    {
        if(ele[i]<min)
        {
            min = ele[i];
        }
    }

    cout<<"Smallest number is: "<<min<<endl;
}