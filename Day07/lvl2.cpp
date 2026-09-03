#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the number N: ";
    cin>>N;

    int count4=0;
    int count6=0;
    int countNeither=0;
    int countBoth=0;
    int sumNeither=0;

    bool flag=false;

    for(int i=1;i<=N;i++)
    {
        if(i%4==0)
        {
            count4++;
        }

        if(i%6==0)
        {
            count6++;
        }

        if(i%4==0 && i%6==0)
        {
            countBoth++;
        }

        if(i%4!=0 && i%6!=0)
        {
            countNeither++;
            sumNeither+=i;
        }
    }

    cout<<"Divisible by 4: "<<count4<<endl;
    cout<<"Divisible by 6: "<<count6<<endl;
    cout<<"Divisible by neither: "<<countNeither<<endl;
    cout<<"Divisible by both: "<<countBoth<<endl;
    cout<<"Sum of neither: "<<sumNeither<<endl;
    
    for(int i=N-1;i>=1;i--)
    {
        if(i%4==0 && i%6==0)
        {
            cout<<"Largest number less than N divisible by both: "<<i<<endl;
            flag=true;
            break;
        }
    }

    if(flag==false)
    {
        cout<<"No such number found which is largest number less than N divisible by both";
    }
    return 0;

}