#include<iostream>
#include<climits>
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

    int min = ele[0];
    int secMin = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(ele[i] < min)
        {
            secMin = min;
            min = ele[i];
        }

        else if(ele[i]!=min && ele[i]<secMin)
        {
            secMin = ele[i];
        }
    }

    cout<<"The second smallest distinct number is: "<<secMin<<endl;
}
