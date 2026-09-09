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

    int cStreak=1;
    int maxS=0;
    int element=0;

    for(int i=1;i<N;i++)
    {
        if(ele[i] == ele[i-1])
        {
            cStreak++;
        }

        else
        {
            cStreak = 1;
        }

        if(cStreak>maxS)
        {
            maxS = cStreak;
            element = ele[i];
        }
    }

    cout<<"Longest consecutive count: "<<maxS<<endl;
    cout<<"Element: "<<element<<endl;

    return 0;
}