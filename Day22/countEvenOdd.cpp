#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;

    cout<<"Enter the size: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int even = 0;
    int odd = 0;

    for(int i=0;i<N;i++)
    {
        if(ele[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;

    return 0;
}