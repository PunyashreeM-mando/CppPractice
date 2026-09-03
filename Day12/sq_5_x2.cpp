#include<iostream>
using namespace std;

int square(int N);
int sqPlus5(int N);
int sqPlus5x2(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sqPlus5x2(n);

    cout<<"The final answer is: "<<R<<endl;

    return 0;
}

int sqPlus5x2(int N)
{
    int r = sqPlus5(N);
    return r*2;
}

int sqPlus5(int N)
{
    int s = square(N);
    return s+5;
}

int square(int N)
{
    return N*N;
}