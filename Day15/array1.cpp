#include<iostream>
using namespace std;

/*int main()
{
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;

    int ele[N];

    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"Enter the number to entered: ";
        cin>>n;

        ele[i] = n;
    }

    cout<<"The array is: ";

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i]<<" ";
    }
}*/

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the array element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i]<<" ";
    }
}
    