#include<iostream>
using namespace std;

int main()
{
    int ele[100];

    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int sum=0;
    int avgCount=0;

    for(int i=0;i<N;i++)
    {
        sum+=ele[i];
    }

    float avg = (float)sum/N;

    for(int i=0;i<N;i++)
    {
        if(ele[i]>avg)
        {
            avgCount++;
        }
    }

    cout<<"The number of numbers greater than avgerage is: "<<avgCount<<endl;

    return 0;
}