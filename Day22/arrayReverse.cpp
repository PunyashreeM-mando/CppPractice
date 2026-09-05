/*#include<iostream>
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

    int Left = 0;
    int Right = N-1;

    int i = 0;
    int temp;

    while(i<(N+1)/2)
    {
        temp = ele[Left];
        ele[Left] = ele[Right];
        ele[Right] = temp;

        Left++;
        Right--;
        i++;
    }

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i];
    }

    return 0;
}*/

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

    int Left = 0;
    int Right = N-1;

    int temp;

    while(Left < Right)
    {
        temp = ele[Left];
        ele[Left] = ele[Right];
        ele[Right] = temp;

        Left++;
        Right--;
    }

    for(int i=0;i<N;i++)
    {
        cout<<" "<<ele[i];
    }

    return 0;
}