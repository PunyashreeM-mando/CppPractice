#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks<0 || marks>100)
    {
        cout<<"Marks are invalid";
    }

    else if(marks>=90 && marks<=100)
    {
        cout<<"Excellent";
    }

    else if(marks>=75 && marks<90)
    {
        cout<<"Very good";
    }

    else if(marks>=50 && marks<75)
    {
        cout<<"Good";
    }

    else if(marks>=35 && marks<50)
    {
        cout<<"Pass";
    }

    else
    cout<<"Fail"<<endl;

    return 0;
}