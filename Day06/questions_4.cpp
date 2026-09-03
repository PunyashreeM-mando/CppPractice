#include<iostream>
using namespace std;

int main()
{
    int N;
    bool found = false;
    cout<<"Enter the number N: ";
    cin>>N;

   /* for(int i=10;i>=1;i--)

    {
        cout<<N<<" x "<<i<<" = "<<N*i<<endl;
    } 

    for(int i=1;i<=100;i++) //multiples
    {
        cout<<N*i<<endl;
    }*/

    for(int i=N-1;i>=1;i--)
    {
        if(i%9 == 0)
        {
            cout<<i;
            found = true;
            break;
        }
    }

    if(found==false)
    {
        cout<<"No such numbers found";
    }
    return 0;
}