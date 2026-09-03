#include<iostream>
using namespace std;

void analyzeDivisibility(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    analyzeDivisibility(n);

    return 0;
}

void analyzeDivisibility(int N)
{
    int count3=0;
    int sum3=0;
    int count5=0;
    int sum5=0;
    int count3And5=0;
    int sum3And5=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            count3++;
            sum3+=i;
        }

        if(i%5==0)
        {
            count5++;
            sum5+=i;
        }

        if(i%3==0 && i%5==0)
        {
            count3And5++;
            sum3And5+=i;
        }
    }

    cout<<"The number of numbers divisible by 3 from 1 to N: "<<count3<<endl;
    cout<<"The sum of numbers divisible by 3 from 1 to N: "<<sum3<<endl;
    cout<<endl;
    cout<<"The number of numbers divisible by 5 from 1 to N: "<<count5<<endl;
    cout<<"The sum of numbers divisible by 5 from 1 to N: "<<sum5<<endl;
    cout<<endl;
    cout<<"The number of numbers divisible by 3 and 5 both from 1 to N: "<<count3And5<<endl;
    cout<<"The sum of numbers divisible by 3 and 5 both from 1 to N: "<<sum3And5<<endl;
    cout<<endl;
}