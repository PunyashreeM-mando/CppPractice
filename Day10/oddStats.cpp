#include<iostream>
using namespace std;

void oddStats(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    oddStats(n);

    return 0;
}

void oddStats(int N)
{
    int oSum=0;
    int oCount=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            oCount++;
            oSum+=i;
        }
    }

    cout<<"The count of Odd numbers is: "<<oCount<<endl;
    cout<<"The sum of Odd numbers is: "<<oSum<<endl;
}
