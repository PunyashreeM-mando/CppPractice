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

    int sum=0;

    for(int i=0;i<N;i++)
    {
        if(ele[i]>0)
        {
            sum+=ele[i];
        }
    }

    cout<<"The sum of the positive numbers is: "<<sum<<endl;
}