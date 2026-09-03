#include<iostream>
using namespace std;

int main()
{ 
    //normal control statements
   /* int a;
    cout<<"I am learning the control statements"<<endl;
    cout<<"Enter the age"<<endl;
    cin>>a;

    if((a>=18)&&(a>0))
    {
        cout<<"You are eligible to vote"<<endl;
    }
    else if(a<0)
    cout<<"Invalid age"<<endl;
    else
    cout<<"You are not eligible to vote"<<endl;*/

    //SELECTION CONTROL STATEMENTS

    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;

    switch(age)
    {
        case 18:
        cout<<"You are eligible to vote"<<endl;
        break;          //break statement lagana imp hai nhi toh sare cases print ho jayenge

        case 12:
        cout<<"You won free tickets to moive"<<endl;
        break;

        case 25:
        cout<<"You are capable to marry"<<endl;
        break;

        default:
        cout<<"No special cases"<<endl;
            break;
    }

    cout<<"Done with switch case"<<endl;


    return 0;
}