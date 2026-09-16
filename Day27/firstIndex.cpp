#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the stirng: ";
    cin.getline(str,100);

    char ch;
    cin>>ch;

    int flag=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            cout<<"First occurance index is: "<<i<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<"-1"<<endl;
    }

    return 0;
}