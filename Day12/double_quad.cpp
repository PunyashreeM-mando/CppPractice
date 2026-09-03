#include<iostream>
using namespace std;

int doubleNumber(int N);
int quadrupleNumber(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = quadrupleNumber(n);

    cout<<"The quad of the number is: "<<R<<endl;

    return 0;
}

int quadrupleNumber(int N)
{
    int r = doubleNumber(N);

    return r*2;
}

int doubleNumber(int N)
{
    return N*2;
}