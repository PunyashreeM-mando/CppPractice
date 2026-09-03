#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int sumExp=0;

    for(int i=0;i<N-1;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];

        sumExp+=ele[i];
    }

    int sumOg = 0;
    for(int i=1;i<=N;i++)
    {
        sumOg += i;
    }

    int result = sumOg-sumExp;

    cout<<"The answer is: "<<result<<endl;


    
}