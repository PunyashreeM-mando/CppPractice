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

    int maxCount = 0;
    int mostFreq = 0;

    for(int i=0;i<n;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(ele[i] == ele[j])
            {
                count++;
            }
        }

        if(count>maxCount)
        {
            maxCount = count;
            mostFreq = ele[i];
        }
    }

    cout<<"The element with most frequency is: "<<mostFreq<<endl;
    cout<<"The frequency is: "<<maxCount<<endl;

    return 0;
}