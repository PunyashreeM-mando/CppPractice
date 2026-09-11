#include<iostream>
using namespace std;

int main()
{
    int ele[100][100];
    int row, colm;

    cout<<"Enter the row: ";
    cin>>row;

    cout<<"Enter the column: ";
    cin>>colm;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<"Enter the element: ";
            cin>>ele[i][j];
        }

        cout<<endl;
    }

    int sum =0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            sum+=ele[i][j];
        }
    }

    cout<<"The sum of all the elements is: "<<sum<<endl;

    return 0;
}