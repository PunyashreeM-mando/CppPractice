#include<iostream>
using namespace std;

int main()
{
    int ele[100][100];
    int trans[100][100];

    int row, colm;

    cout<<"Enter the row: ";
    cin>>row;

    cout<<"Enter the column: ";
    cin>>colm;

    if(row != colm)
    {
        cout<<"The matrix is not symmetric";
        return 0;
    }

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
        for(int j=0;j<row;j++)
        {
            trans[j][i] = ele[i][j];
        }
    }

    int flag=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(ele[i][j]==trans[i][j])
            {
                flag = 1;
            }

            else
            {
                flag = 0;
                break;
            }
        }
    }

    if(row == colm)
    {
        if(flag == 1)
        {
            cout<<"The matrix is symmetric";
        }
    }

    else{
        cout<<"The matrix is not synnetric";
    }

    return 0;
}