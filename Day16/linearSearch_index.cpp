#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int X;
    cout<<"Enter the number to be found: ";
    cin>>X;

    int index = -1;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        if(ele[i]==X)
        {
            index = i;
            break;
        }
    }

    if(index!=-1)
    {
        cout<<"The position at which number found is: "<<index<<endl;
    }

    else
    {
        cout<<"Number not found"<<endl;
    }

    return 0;
}