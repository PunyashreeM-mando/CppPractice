#include<iostream>
using namespace std;

bool isPrime(int N);
int countIsPrime(int N);

int main()
{
    int count = 0;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int R = countIsPrime(n);

    cout<<"The number of prime numbers are: "<<R<<endl;

    return 0;

}

int countIsPrime(int N)
{
    int count = 0;

    for(int i=1;i<=N;i++)
    {

        if(isPrime(i) == true)
        {
          count++;
        }
    }

    return count;
}

bool isPrime(int N)
{
    if(N<=1)
    {
        return false;
    }

    for(int j=2;j<=N-1;j++)
    {
        if(N%j==0)
        {
            return false;
        }
    }

    return true;
}

