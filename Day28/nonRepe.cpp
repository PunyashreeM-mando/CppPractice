#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int count;

    for(int i=0;str[i]!='\0';i++)
    {
        count=0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

        if(count==1)
        {
            cout<<"The first non repeating character is: "<<str[i]<<endl;
            break;
        }
    }

    return 0;
}