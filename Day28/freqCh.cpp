#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);

    int count;
    int maxFreq=0;
    char maxFreqCh=0;

    for(int i=0;str[i]!='\0';i++)
    {
        count = 0;
        int flag = 0;

        if(str[i] == ' ')
        {
            continue;
        }

        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            continue;
        }
        
        for(int k=0;str[k]!='\0';k++)
        {
            if(str[k]==str[i])
            {
                count++;
            }
        }

        if(maxFreq<count)
        {
            maxFreq=count;
            maxFreqCh = str[i];
        }
    }

    cout<<"The character with most frequency is: "<<maxFreqCh<<endl;
    cout<<"Frequency: "<<maxFreq<<endl;

    return 0;
}