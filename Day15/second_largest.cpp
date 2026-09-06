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

    int max;
    int secMax;

    if(ele[0]>ele[1])
    {
        max = ele[0];
        secMax = ele[1];
    }

    else if(ele[1]>ele[0])
    {
        max = ele[1];
        secMax = ele[0];
    }

    for(int i=2;i<N;i++)
    {
        if(ele[i]>max)
        {
            secMax=max;
            max=ele[i];
        }

        else if(ele[i]>secMax)
        {
            secMax = ele[i];
        }
    }

    cout<<"The second largest number is: "<<secMax<<endl;

    return 0;

    // will set the starting two numbers as max and second max. 
    //Then will run the loop from i = 2.
    // if the element is greater than max will make max as element and 
    //will check if the elemnet is greater than secMax and less than max will make second max as element.
}