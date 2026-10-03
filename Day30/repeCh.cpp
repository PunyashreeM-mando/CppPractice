#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int count = 0;
    char ch;

    for(int i=0;str[i]!='\0';i++)
    {
        count = 0;

        for(int j=0;j<i;j++)
        {
            if(str[i] == str[j])
            {
                continue;
            }
        }

        for(int k=i+1;str[k]!='\0';k++)
        {
            if(str[k] == str[i])
            {
                count++;
                ch = str[k];
            }
        }

        if(count>=1)
        {
            cout<<" "<<ch;
        }
        else
        {
            continue;
        }
    }

    return 0;
}