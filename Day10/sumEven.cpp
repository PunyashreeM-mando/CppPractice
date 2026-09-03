#include<iostream>
using namespace std;

int sumEven(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sumEven(n);

    cout<<"The sum of all the even numbers from 1 to "<<n<<" is: "<<R<<endl;

    return 0;
}

int sumEven(int N)
{
    int eSum=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            eSum+=i;
        }
    }

    return eSum;
}