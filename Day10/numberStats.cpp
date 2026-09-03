#include<iostream>
using namespace std;

void numberStats(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    numberStats(n);

    return 0;
}

void numberStats(int N)
{
    int countEven=0;
    int sumEven=0;
    int countDiv3=0;
    int sumDiv3=0;
    int countDiv2And3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            countEven++;
            sumEven+=i;
        }

        if(i%3==0)
        {
            countDiv3++;
            sumDiv3+=i;
        }

        if(i%3==0 && i%2==0)
        {
            countDiv2And3++;
        }
    }

    cout<<"Count of even numbers: "<<countEven<<endl;
    cout<<"Sum of even numbers: "<<sumEven<<endl;
    cout<<endl;
    cout<<"Count of numbers divisible by 3: "<<countDiv3<<endl;
    cout<<"Sum of numbers divisible by 3: "<<sumDiv3<<endl;
    cout<<endl;
    cout<<"Count of numbers divisible by both 2 and 3: "<<countDiv2And3<<endl;
}