#include<iostream>
using namespace std;

int sumDiv3And5(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sumDiv3And5(n);

    cout<<"The sum of number from 1 to N which are divisible by both 3 and 5 is: "<<R<<endl;

    return 0;
}

int sumDiv3And5(int N)
{
    int sum=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%5==0)
        {
            sum+=i;
        }
    }

    return sum;
}