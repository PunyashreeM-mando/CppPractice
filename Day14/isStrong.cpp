#include<iostream>
using namespace std;

bool isStrong(int N);
int sSum(int N);
int factorial(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    bool R = isStrong(n);

    if(R)
    {
        cout<<"Number is strong"<<endl;
    }

    else
    {
        cout<<"Number is not strong"<<endl;
    }

    return 0;
}

bool isStrong(int N)
{
    int s = sSum(N);

    if(s==N)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int sSum(int N)
{
    int sum=0;

    while(N>0)
    {
        int num = N%10;

        int f = factorial(num);

        sum+=f;

        N = N/10;
    }

    return sum;
}

int factorial(int N)
{
    int fact=1;

    for(int i=N;i>=1;i--)
    {
        fact*=i;
    }

    return fact;
}