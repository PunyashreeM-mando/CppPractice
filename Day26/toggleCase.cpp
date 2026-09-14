#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    cout<<"Entered: "<<str<<endl;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        else
        {
            continue;
        }
    }

    cout<<"The string becomes: "<<endl;

    for(int j=0;str[j]!='\0';j++)
    {
        cout<<str[j];
    }

    return 0;
}