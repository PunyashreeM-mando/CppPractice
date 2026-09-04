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

    int XOR1 = 0;
    int XOR2=0;

    for(int i=1;i<=N;i++)
    {
        XOR1 = XOR1^i;
    }

    for(int i=0;i<N-1;i++)
    {
        XOR2 = XOR2^ele[i];
    }

    int ans = XOR1^XOR2;

    cout<<"The missing element is: "<<ans<<endl;

    return 0;

}