#include<iostream>
using namespace std;

int main()
{
    string name, branch;
    int a;

    /*cout<<"Enter the age: ";
    cin>>a;

    cout<<"Enter the name of the student: ";
    getline(cin, name);

    cout<<"The age of the student is "<<a<<endl;
    cout<<"The name of the student is "<<name<<endl;*/

    cout<<"Enter the age: "<<a;

    cin.ignore();

    cout<<"Enter the name of the student: "<<endl;
    getline(cin, name);

    cout<<"The age of the student is "<<a<<endl;
    cout<<"The name of the student is "<<name<<endl;



    return 0;
}