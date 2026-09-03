#include<iostream>
using namespace std;

int main()
{
    // For a rectangle l is lenght, b is breadth, and h is height

    /*float l = 3.45;
    float b = 5.22;
    float h = 1.44;

    float a = l*b*h;

    cout<<"The area of the rectangle is "<<a<<endl;*/

    float l,b,h;
    cout<<"Enter the value of lenght: ";
    cin>>l;
    cout<<"Enter the value of breadth: ";
    cin>>b;
    cout<<"Enter the value of height: ";
    cin>>h;
  
    float a = l*b*h;

    cout<<"The area of the rectangle is: "<<a<<endl;

    return 0;
}