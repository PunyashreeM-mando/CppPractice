#include<iostream>
using namespace std;


int factorial(int N)
{
    int pro = 1;

    if(N==0)
    {
        return 1;
    }

    for(int i=N;i>=1;i--)
    {
        pro *= i;
    }

    return pro;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fact = factorial(n);

    cout<<"The factorial of the entered number is: "<<fact<<endl;

    return 0;
}