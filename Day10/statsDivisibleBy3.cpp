#include<iostream>
using namespace std;

void statsDivisibleBy3(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    statsDivisibleBy3(n);

    return 0;
}

void statsDivisibleBy3(int N)
{
    int countDiv3=0;
    int sumDiv3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            countDiv3++;
            sumDiv3+=i;
        }
    }

    cout<<"The number of nummbers divisible by 3 from 1 to N are: "<<countDiv3<<endl;
    cout<<"The sum of all the nummbers from 1 to N which are divisible by 3 are: "<<sumDiv3<<endl;
}
