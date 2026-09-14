#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the word: ";
    cin.getline(str,100);

    int i=0;
    int countV=0;
    int countS=0;
    int countC=0;

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            countV++;
        }
        else if(str[i] == ' ')
        {
            countS++;
        }
        else
        {
            countC++;
        }

        i++;
    }

    cout<<"Vowles: "<<countV<<endl;
    cout<<"Consonants: "<<countC<<endl;
    cout<<"Spaces: "<<countS<<endl;

    return 0;
}