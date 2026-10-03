#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int count = 0;
    int flag = 0;
    char ch;

    for(int i=0;str[i]!='\0';i++)
    {

        if(str[i] == ' ')
        {
            continue;
        }

        count = 0;
        
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

        if(count >=2)
        {
            flag = 1;
            ch = str[i];
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"Repeated element is: "<<ch<<endl;
    }
    else
    {
        cout<<"No duplicates found"<<endl;
    }

    return 0;
}