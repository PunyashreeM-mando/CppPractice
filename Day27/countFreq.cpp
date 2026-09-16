#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    char ch;
    cin>>ch;

    int count=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }

    cout<<"Freqency is: "<<count<<endl;

    return 0;
}