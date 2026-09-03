#include<iostream>
using namespace std;

bool isPrime(int N);

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool R = isPrime(n);
    if(R==true)
    {
       cout<<"Number is Prime"<<endl;
    }
    else
    {
        cout<<"Number is not prime"<<endl;
    }

    return 0;
}

bool isPrime(int N)
{

    for(int i=2;i<=N-1;i++)
    {
        if(N==1)
        {
         cout<<"1 is neither a prime number nor a composite number"<<endl;
         break;
        
        }

        if(N<1)
        {
            return false;
        }

        if(N%i==0)
        {
            return false;
        }
    }

    return true;
}