#include<iostream>
using namespace std;

void statsDivisibleBy3Not6(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    statsDivisibleBy3Not6(n);

    return 0;
}

void statsDivisibleBy3Not6(int N)
{
    int countDiv3=0;
    int sumDiv3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%6!=0)
        {
            countDiv3++;
            sumDiv3+=i;
        }
    }

    cout<<"Count: "<<countDiv3<<endl;
    cout<<"Sum: "<<sumDiv3<<endl;
}