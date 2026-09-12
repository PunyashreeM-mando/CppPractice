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

    cout<<"The transpose of the matrix is: "<<endl;

    
    for(int i=0;i<colm;i++)
    {
        for(int j=0;j<row;j++)
        {
           cout<<" "<<ele[j][i];
        }
        cout<<endl;
    }
    
    return 0;
}