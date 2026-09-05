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

    int found = 0;
    int ans = 0;

    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(ele[i] == ele[j])
            {
                ans = ele[i];
                found = 1;
                break;

            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 1)
    {
        cout<<"The first repeating element is: "<<ans<<endl;
    }
    else
    {
        cout<<"No such element found"<<endl;
    }

    return 0;
}