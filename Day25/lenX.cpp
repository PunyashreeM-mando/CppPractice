#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,100);

    int count=0;
    int i=0;

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    cout<<"The length is: "<<count<<endl;

    return 0;
}