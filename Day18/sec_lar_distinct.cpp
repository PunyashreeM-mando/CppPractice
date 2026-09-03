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
    int sec_max = -1;

    for(int i=1;i<N;i++)
    {
        if(ele[i]>max)
        {
            sec_max = max;
            max = ele[i];
        }

        else if(ele[i]!= max && ele[i]>sec_max)
        {
            sec_max = ele[i];
        }
    }

    cout<<"The second largest distinct element is: "<<sec_max<<endl;
}