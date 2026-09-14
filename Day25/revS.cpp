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

    cout<<"The lenght is: "<<count<<endl;

    int temp;
    int i=0;
    int j = count-1;

    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    int k=0;
    while(str[k] !='\0')
    {
        cout<<" "<<str[k];
        k++;
    }

    return 0;


}