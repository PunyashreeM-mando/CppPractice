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
    
    for(int i=0;i<colm;i++)
    {
        int sum =0;

        for(int j=0;j<row;j++)
        {
            sum += ele[j][i];
        }

        cout<<"Column "<<i+1<<" sum: "<<sum<<endl;
    }

    return 0;
}