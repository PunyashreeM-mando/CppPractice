#include<iostream>
using namespace std;

int sumStrong(int N);
bool isStrong(int N);
int factorial(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sumStrong(n);

    cout<<"The sum of all the strong numbers from 1 to N is: "<<R<<endl;

    return 0;
}

int sumStrong(int N)
{
    int sum=0;

    for(int i=1;i<=N;i++)
    {
        if(isStrong(i))
        {
            sum+=i;
        }
    }

    return sum;
}

bool isStrong(int N)
{
    int sSum=0;
    int og = N;

    while(N>0)
    {
        int num = N%10;
        int f = factorial(num);
        sSum+=f;

        N = N/10;
    }

    if(sSum==og)
    {
        return true;
    }

    else
    {
        return false;
    }
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