#include<iostream>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cout<<"Enter the string 1: ";

    cin.getline(str1,100);

    cout<<"Enter the string 2: ";
    cin.getline(str2,100);

    int i=0;
    int j=0;

    int length1=0;
    int length2=0;

    while(str1[i]!='\0')
    {
        length1++;
        i++;
    }

    while(str2[j]!='\0')
    {
        length2++;
        j++;
    }

    if(length1!=length2)
    {
        cout<<"Not Equal"<<endl;
        return 0;
    }

    int count=0;

    for(int k=0;str1[k]!='\0';k++)
    {
        if(str1[k]==str2[k])
        {
            count++;
        }
    }

    if(count == length1)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }

    return 0;
}