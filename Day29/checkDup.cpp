#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter the string: ";
    cin.getline(str,100);

    int flag = 0;

    for(int i=0;str[i]!='\0';i++)
    {

        if(str[i] == ' ')
        {
            continue;
        }

        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"Duplicate characters found"<<endl;
    }

    else
    {
        cout<<"All characters are unique"<<endl;
    }

    return 0;
}