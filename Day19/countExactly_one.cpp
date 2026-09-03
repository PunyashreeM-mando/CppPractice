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

    int ansCount = 0;

    for(int i=0;i<n;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(ele[i]==ele[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            ansCount++;
        }
    }

    cout<<"The count of elements that occur once is: "<<ansCount<<endl;

    return 0;

}