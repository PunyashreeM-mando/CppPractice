#include<iostream>
using namespace std;

int countDiv3ButNot5(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = countDiv3ButNot5(n);

    cout<<"The sum of the numbers will be: "<<R<<endl;

    return 0;
}

int countDiv3ButNot5(int N)
{
    int count=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%5!=0)
        {
            count++;
        }
    }

    return count;
}

