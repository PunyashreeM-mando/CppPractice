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
        if(str[i]>='0' && str[i]<='9')
        {
            count++;
        }
    }

    cout<<"The number of digits in the sentence are: "<<count<<endl;

    return 0;
}