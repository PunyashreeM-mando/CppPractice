#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the stirng: ";
    cin.getline(str,100);

    char ch;
    cin>>ch;

    int pos=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch)
        {
            str[pos] = str[i];
            pos++;
        }
    }
    str[pos] = '\0';

    for(int j=0;str[j]!='\0';j++)
    {
        cout<<str[j];
    }

    return 0;
}