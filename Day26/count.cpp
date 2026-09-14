#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter the sentence: ";
    cin.getline(str,100);

    int countU=0;
    int countL=0;
    int countN=0;
    int countS=0;

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i]>= 'A' && str[i] <= 'Z')
        {
            countU++;
        }

        else if(str[i]>= 'a' && str[i] <= 'z')
        {
            countL++;
        }

        else if(str[i]>= '0' && str[i] <= '9')
        {
            countN++;
        }

        else if(str[i] == ' ')
        {
            continue;
        }

        else
        {
            countS++;
        }
    }

    cout<<"Upper Case: "<<countU<<endl;
    cout<<"Lower Case: "<<countL<<endl;
    cout<<"Digit: "<<countN<<endl;
    cout<<"Special Case: "<<countS<<endl;

    return 0;
}