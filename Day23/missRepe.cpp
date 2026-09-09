#include<iostream>
using namespace std;

int main()
{
    int ele[100];
    int N;

    cout<<"Enter the size: ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele[i];
    }

    int Esum=0;
    int Asum=0;
    int miss;

    for(int i=1;i<=N;i++)
    {
        Esum = Esum+i;
    }

    cout<<"Expected sum: "<<Esum<<endl;

    for(int i=0;i<N;i++)
    {
        Asum=Asum+ele[i];
    }

    cout<<"Actual sum: "<<Asum<<endl;

    //duplicate

    int a;

    for(int i=0;i<N;i++)
    {
        int count =0;
        for(int j=0;j<N;j++)
        {
            if(ele[i] == ele[j])
            {
                count++;
            }
        }

        if(count > 1)
        {
            a = ele[i];
            break;
        }
    }

    miss = Esum - Asum + a;

    

    cout<<"Missing: "<<miss<<endl;
    cout<<"Repeated: "<<a<<endl;

    return 0;
}