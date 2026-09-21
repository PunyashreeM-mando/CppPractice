#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int pos = 0;
    int flag =1;

    for(int i=0;str[i]!='\0';i++)
    {

        flag = 1;
        
        for(int j=0;j<i;j++)
        {
            if(str[j]==str[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            str[pos] = str[i];
            pos++;
        }
    }

    str[pos] = '\0';

    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }

    return 0;
}