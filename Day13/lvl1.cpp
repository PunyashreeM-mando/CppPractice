#include<iostream>
using namespace std;

int checkDiv(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    int R = checkDiv(n);

    if(R==1)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }

    return 0;
}

int checkDiv(int N)
{
    if(N%3==0 && N%5==0)
    {
        return 1;
    }

    else
    {
        return -1;
    }
}