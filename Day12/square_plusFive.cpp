#include<iostream>
using namespace std;

int square(int N);
int squarePlusFive(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = squarePlusFive(n);

    cout<<"The final answer is: "<<R<<endl;

    return 0;
}

int squarePlusFive(int N)
{
    int r = square(N);

    return r+5;
}

int square(int N)
{
    return N*N;
}