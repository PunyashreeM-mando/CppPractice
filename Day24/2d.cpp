#include<iostream>
using namespace std;

int main()
{
    int ele[100][100];

    int row, colm;

    cout<<"Enter the rows: ";
    cin>>row;

    cout<<"Enter the columns: ";
    cin>>colm;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<"Enter the element: ";
            cin>>ele[i][j];
        }
    }

    cout<<"The 2D matrix is: "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<" "<<ele[i][j];
        }

        cout<<endl;
    }

    return 0;
}