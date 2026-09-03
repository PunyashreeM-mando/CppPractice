#include<iostream>
using namespace std;

int main()
{
    /*char n,b;
    int a;
    cout<<"Enter the name of the student"<<endl;
    cin>>n;

    cout<<"Enter the age of the student"<<endl;
    cin>>a;

    cout<<"Enter the branch of the student"<<endl;
    cin>>b;

    cout<<"The student name is "<<n<<"The age is "<<a<<"And the branch is "<<b<<endl;*/

    /*string name, branch;
    int a;

    cout<<"Enter the name "<<endl;
    cin>>name;

    cout<<"Enter the branch "<<endl;
    cin>>branch;

    cout<<"Enter the age "<<endl;
    cin>>a;

    cout<<"The name of the student is "<<name;
    cout<<"The branch is "<<branch;
    cout<<"The age is "<<a;*/

    string name, branch;
    int age;

    cout<<"Enter the name of the student "<<endl;
    getline(cin, name);

    cout<<"Enter the branch of the student "<<endl;
    getline(cin, branch);

    cout<<"Enter the age :"<<endl;
    cin>>age;

    cout<<"The name of the student is "<<name<<endl;
    cout<<"The branch is "<<branch<<endl;
    cout<<"The age of the student is "<<age<<endl;

    return 0;
}