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

    int max = ele[0];
    int min = ele[0];

    for(int i=0;i<N;i++)
    {
        if(ele[i]>max)
        {
            max = ele[i];
        }

        if(ele[i]<min)
        {
            min = ele[i];
        }
    }

    int ans = max - min;

    cout<<"The difference is: "<<ans<<endl;

    return 0;
}