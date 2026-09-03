#include<iostream>
using namespace std;

int countDivisibleBy3Or5(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = countDivisibleBy3Or5(n);

    cout<<"The number of numbers divisible by 3 or 5 are: "<<R<<endl;

    return 0;
}

int countDivisibleBy3Or5(int N)
{
    int divCount3Or5=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 || i%5==0)
        {
            divCount3Or5++;
        }
    }

    return divCount3Or5;
}