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

    int found =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ele[i]==ele[j])
            {
                cout<<ele[i];
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 0)
    {
        cout<<"No such number found";
    }

    return 0;
}