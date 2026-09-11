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
    }
    
    for(int i=0;i<row;i++)
    {
        int sum =0;

        for(int j=0;j<colm;j++)
        {
            sum += ele[i][j];
        }

        cout<<"Row "<<i+1<<" sum: "<<sum<<endl;
    }

    return 0;
}