#include<iostream>
using namespace std;
//using function prototype
int cube(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int C = cube(n);    // function call and the value returned from the function called cube is stored in C

    cout<<"The cube of the number is: "<<C<<endl;

    return 0;
}

int cube(int N)  // this
{                // is known as
    return N*N*N;// function
}                // defintion
