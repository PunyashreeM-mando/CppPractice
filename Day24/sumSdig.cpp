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

    int sum =0;
    int lastIndex = row -1;
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(i+j == lastIndex)
            {
                sum += ele[i][j];
            }
        }
    }

    cout<<"Sum of the secondary diagonal elements is: "<<sum<<endl;

    return 0;
}