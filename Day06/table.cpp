#include<iostream>
using namespace std;

int main()
{
    int i;

    int n;
    cout<<"Enter the number of which you need table: ";
    cin>>n;

    cout<<"=============================="<<endl;
    cout<<" The table of "<<n<<" is below"<<endl;
    cout<<"=============================="<<endl;

    for(i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}