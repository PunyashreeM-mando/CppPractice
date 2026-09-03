#include<iostream>
using namespace std;

int square(int N);
int sqAdd(int N);
int numx2(int N);
int sqAddx2(int N);
int sqAddx2Sub10(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = sqAddx2Sub10(n);

    cout<<"The final answer is: "<<R<<endl;

    return 0;
}

int sqAddx2Sub10(int N)
{
    int r = sqAdd(N);

    return r-10;
}

int sqAdd(int N)
{
    int p = square(N);

    int i = numx2(N);

    return p+i;
}

int numx2(int N)
{
    return N*2;
}

int square(int N)
{
    return N*N;
}

