#include<iostream>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cout<<"Enter the 1st string: ";
    cin.getline(str1,100);

    cout<<"Enter the 2nd string: ";
    cin.getline(str2,100);

    int l1=0;
    int l2=0;

    int flag = 1;

    for(int i=0;str1[i]!='\0';i++)
    {
        l1++;
    }

    for(int i=0;str2[i]!='\0';i++)
    {
        l2++;
    }

    if(l1!=l2)
    {
        cout<<"Not Anagram"<<endl;
        return 0;
    }

    int count1=0;
    int count2=0;

    for(int i=0;str1[i]!='\0';i++)
    {
        count1=0;
        count2 = 0;

        for(int j=0;str1[j]!='\0';j++)
        {
            if(str1[i]==str1[j])
            {
                count1++;
            }
        }


        for(int k=0;str2[k]!='\0';k++)
        {


            if(str1[i] == str2[k])
            {
                count2++;
            }
        }

        if(count1==count2)
        {
            flag =1;
        }

        else
        {
            cout<<"Not Anagram"<<endl;
            return 0;
        }
    }

    if(flag == 1)
    {
        cout<<"Anagram"<<endl;
    }
    
    return 0;

}