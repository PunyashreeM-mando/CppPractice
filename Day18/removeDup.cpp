#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int pos = 0;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        int foundBefore = 0;

        for(int j=0;j<i;j++)
        {
            if(ele[j] == ele[i])
            {
                foundBefore = 1;
                break;
            }
        }

        if(foundBefore)
        {
            continue;
        }

        else
        {
            ele[pos] = ele[i];
            pos++;
        }
    }

    cout<<"The array is: ";

    for(int i=0;i<pos;i++)
    {
        cout<<ele[i]<<" ";
    }
}