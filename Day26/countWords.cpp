#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] != ' ' && (str[i-1]==' ' || i==0))
        {
            count++;
        }
    }

    cout<<"The number of words in the sentnce is: "<<count<<endl;

    return 0;
}