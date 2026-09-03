#include<iostream>
using namespace std;

int countEven(int n);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = countEven(n);

    cout<<"The number of even numbers from 1 to "<<n<<" is: "<<R<<endl;

    return 0;
}

int countEven(int N)
{
    int eCount=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            eCount++;
        }
    }

    return eCount;
}
