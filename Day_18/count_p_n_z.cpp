#include<iostream>
using namespace std;

int main()
{
    int ele[100];

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int pCount=0;
    int nCount = 0;
    int zCount = 0;
    for(int i=0;i<n;i++)
    {
        if(ele[i]>0)
        {
            pCount++;
        }

        else if(ele[i]==0)
        {
            zCount++;
        }

        else
        {
            nCount++;
        }
    }

    cout<<"Positive: "<<pCount<<endl;
    cout<<"Negative: "<<nCount<<endl;
    cout<<"Zero: "<<zCount<<endl;

    return 0;

}