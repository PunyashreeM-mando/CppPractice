#include<iostream>
using namespace std;

int main()
{
    int ele1[100][100];
    int ele2[100][100];
    int result[100][100];

    int row1, colm1;
    int row2, colm2;

    cout<<"Enter the row1: ";
    cin>>row1;

    cout<<"Enter the column1: ";
    cin>>colm1;

    cout<<"Enter the row2: ";
    cin>>row2;

    cout<<"Enter the column2: ";
    cin>>colm2;

    if(row1!=row2 || colm1!=colm2)
    {
        cout<<"The matrices can't be added";
        return 0;
    }

    cout<<"Enter the elements for 1st matrix: "<<endl;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colm1;j++)
        {
            cout<<"Enter the elements: ";
            cin>>ele1[i][j];
        }
    }

    cout<<"Enter the elements for 2nd matrix: "<<endl;

    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<colm2;j++)
        {
            cout<<"Enter the elements: ";
            cin>>ele2[i][j];
        }
    }

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colm1;j++)
        {
            result[i][j] = ele1[i][j]+ele2[i][j];
        }
        cout<<endl;
    }

    cout<<"The result is: "<<endl;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<colm1;j++)
        {
            cout<<" "<<result[i][j];
        }
        cout<<endl;
    }

    return 0;
}