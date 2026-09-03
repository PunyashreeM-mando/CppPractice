#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;

    int sum=0;
     
    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
        sum+=ele[i];
    }

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i]<<" ";
    }

    cout<<"The sum of the elements is: "<<sum<<endl;

    return 0;
}