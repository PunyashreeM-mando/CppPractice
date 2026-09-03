#include<iostream>
using namespace std;

int square(int n)
{
    return n*n;
}

int sumOfSquares(int a, int b)
{
    int A = square(a);
    int B = square(b);

    return A+B;
}

int main()
{
    int a,b;
    cout<<"Enter the values for a and b: ";
    cin>>a>>b;

    int sq = sumOfSquares(a,b);

    cout<<"The sum of squares is: "<<sq<<endl;

    return 0;
}