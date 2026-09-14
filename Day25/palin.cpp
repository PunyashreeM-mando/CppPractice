#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,100);

    int count=0;
    int s=0;

    while(str[s]!='\0')
    {
        count++;
        s++;
    }

    int i=0;
    int j=count-1;
    int flag=1;

    while(i<j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
            flag = 1;
        }
        else
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}