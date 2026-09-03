#include<iostream>
using namespace std;

int sumDivisibleBy3(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sumDivisibleBy3(n);

    cout<<"The sum of all the numbers from 1 to N which are divisible by 3 are: "<<R<<endl;

    return 0;
}

int sumDivisibleBy3(int N)
{
    int sumDiv3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            sumDiv3+=i;
        }
    }

    return sumDiv3;
}