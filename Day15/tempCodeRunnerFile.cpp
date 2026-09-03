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

    int max=ele[0];
    int secMax;

    for(int i=1;i<N;i++)
    {
        if(ele[i]>max)
        {
            secMax=max;
            max=ele[i];
        }
    }

    cout<<"The second largest number is: "<<secMax<<endl;

    return 0;
}