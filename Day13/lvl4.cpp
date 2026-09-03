#include<iostream>
using namespace std;

void calCount(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    calCount(n);

    return 0;
}

void calCount(int N)
{
    int count3=0;
    int count5=0;
    int count3And5=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            count3++;
        }

        if(i%5==0)
        {
            count5++;
        }

        if(i%3==0 && i%5==0)
        {
            count3And5++;
        }
    }

    cout<<"The number of numbers divisible by 3 is: "<<count3<<endl;
    cout<<"The number of numbers divisible by 5 is: "<<count5<<endl;
    cout<<"The number of numbers divisible by 3 and 5 both is: "<<count3And5<<endl;
}