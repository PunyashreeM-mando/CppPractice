#include<iostream>
using namespace std;

int square(int N);
int doubleNumber(int N);
int finalCalculations(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = finalCalculations(n);

    cout<<"The final answer is: "<<R<<endl;

    return 0;
}

int finalCalculations(int N)
{
    int r = square(N);

    int s = doubleNumber(N);

    return r+s;
}

int square(int N)
{
    return N*N;
}

int doubleNumber(int N)
{
    return N*2;
}