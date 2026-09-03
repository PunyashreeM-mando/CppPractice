#include<iostream>
using namespace std;

int countDivisibleBy3(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = countDivisibleBy3(n);

    cout<<"The number of numbers divisible by 3 from 1 to N is: "<<R<<endl;

    return 0;
}

int countDivisibleBy3(int N)
{
    int divCount=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            divCount++;
        }
    }

    return divCount;
}