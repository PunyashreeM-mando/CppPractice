#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;

    int countE=0;
    int sumE=0;
    int countO=0;
    int sumO=0;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    for(int i=0;i<N;i++)
    {
        if(ele[i]%2==0)
        {
            countE++;
            sumE+=ele[i];
        }

        else
        {
            countO++;
            sumO+=ele[i];
        }
    }

    cout<<"Even count: "<<countE<<endl;
    cout<<"Even sum: "<<sumE<<endl;
    cout<<endl;
    cout<<"Odd count: "<<countO<<endl;
    cout<<"Odd sum: "<<sumO<<endl;



    return 0;
}