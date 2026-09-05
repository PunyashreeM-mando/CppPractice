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

    int flag = 1;

    int Left = 0;
    int Right = N-1;

    while(Left < Right)
    {
        if(ele[Left] != ele[Right])
        {
            flag = 0;
            break;
        }

        Left++;
        Right--;
    }

    if(flag == 1)
    {
         cout<<"The array is palindrome"<<endl;
    }
    else
    {
        cout<<"The array is not palindrome"<<endl;
    }

    return 0;
}