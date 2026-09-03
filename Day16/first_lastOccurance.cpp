#include<iostream>
using namespace std;

/*int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int X;
    cout<<"Enter the number to be found: ";
    cin>>X;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int first_Oc=-1;
    int last_Oc=-1;

    for(int i=0;i<N;i++)
    {
        if(ele[i]==X)
        {
            first_Oc=i;
            last_Oc=i;
            break;
        }
    }

    for(int j=first_Oc+1;j<N;j++)
    {
        if(ele[j]==X)
        {
            last_Oc=j;
        }
    }

    cout<<"The first occurance is: "<<first_Oc<<endl;
    cout<<"The last occurance is: "<<last_Oc<<endl;

    return 0;
}*/

int main()
{
    int ele[100];
    int N;
    cout<<"Enter the size: ";
    cin>>N;

    int X;
    cout<<"Enter the number to be found: ";
    cin>>X;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int first =-1;
    int last = -1;

    for(int i=0;i<N;i++)
    {
        if(ele[i]==X)
        {
            if(first==-1)
            {
                first =i;
            } 

            last = i;
        }
    }

    cout<<"The first occurance is: "<<first<<endl;
    cout<<"The last occurance is: "<<last<<endl;

    return 0;
}