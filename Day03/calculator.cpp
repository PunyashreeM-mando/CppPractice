#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    
    cout<<"==============="<<endl;
    cout<<"  CALCULATOR   "<<endl;
    cout<<"==============="<<endl;

    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    
    cout<<"Addition: "<<num1+num2<<endl;
    cout<<"Subtraction: "<<num1-num2<<endl;
    cout<<"Multiplication: "<<num1*num2<<endl;
    cout<<"Division: "<<num1/num2<<endl;
    cout<<"Modulus: "<<num1%num2<<endl;

    return 0;
}