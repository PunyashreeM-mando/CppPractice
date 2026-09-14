#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    cout<<"You entered: "<<str<<endl;

    int pos =0;
    int i=0;

    while(str[i] !='\0')
    {
        if(str[i] != ' ')
        {
            str[pos] = str[i];
            pos++;
        }
        i++;
    }

    str[pos] ='\0';

    cout<<"The srting becomes: "<<endl;

    int j=0;

    while(str[j]!='\0')
    {
        cout<<str[j];
        j++;
    }

    return 0;
}