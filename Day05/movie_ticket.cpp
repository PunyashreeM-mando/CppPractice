#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout<<"Enter the name: ";
    getline(cin,name);

    cout<<"Enter the age: ";
    cin>>age;

    if(age<1)
    {
        cout<<"Invalid age"<<endl;
    }

   else if(age>=18)
    {
        cout<<"Hello "<<name<<" !"<<endl;
        cout<<"You are eligible to watch the movie"<<endl;
    }
    else
    {
        cout<<"Sorry "<<name<<" !"<<endl;
        cout<<"You are not eligible to watch movie"<<endl;
    }
    

    return 0;
}