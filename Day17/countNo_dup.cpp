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


    int  countDup=0;

    for(int i=0;i<N;i++)
    {
        int foundBefore=0;

        for(int j=0;j<i;j++)
        {
            if(ele[j]==ele[i])
            {
                foundBefore = 1;
                break;
            }
        }

        if(foundBefore == 1)
        {
            continue;
        }

        for(int j=i+1;j<N;j++)
        {
            if(ele[i] == ele[j])
            {
                countDup++;
                break;
            }
        }
    }

    cout<<"The number of duplicate elements are: "<<countDup<<endl;
}