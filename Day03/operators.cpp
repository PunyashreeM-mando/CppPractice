#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the values to calculate"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"Addition of a and b is "<<a+b<<endl;
    //cout<<"Avegrage of the a, b and c is "<<(a+b+c)/3<<endl;
    cout<<"Sum of three numbers is "<<a+b+c<<endl;

    float avg = (a+b+c)/3.0;
    cout<<"The average of the given three numbers is "<<avg<<endl;
    return 0;
}
