#include<iostream>
using namespace std;

int countDivisibleBy3(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = countDivisibleBy3(n);
     
    cout<<"The number of numbers from 1 to N that are divisible by 3 and not by 6 are: "<<R<<endl;

    return 0;
}

int countDivisibleBy3(int N)
{
    int countDiv3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%6!=0)
        {
            countDiv3++;
        }
    }

    return countDiv3;
}