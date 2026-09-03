#include<iostream>
using namespace std;


float addition(float a, float b)
{
    return a+b;
}

float subtract(float a, float b)
{
    return a-b;
}

float multiply(float a, float b)
{
    return a*b;
}

float divide(float a, float b)
{
    if(b==0)
    {
        return -999;
    }
    else
     return a/b;
}



int main()
{
    float a,b;
    cout<<"Enter the values for a and b: ";
    cin>>a>>b;

    float add = addition(a,b);
    float sub = subtract(a,b);
    float mul = multiply(a,b);
    float div = divide(a,b);

    cout<<"Addition is: "<<add<<endl;
    cout<<"Subraction is: "<<sub<<endl;
    cout<<"Multiplication is: "<<mul<<endl;
    cout<<"Division is: "<<div<<endl;

    return 0;
}