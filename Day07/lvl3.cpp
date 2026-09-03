#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the number N: ";
    cin>>N;

    int countE=0;
    int countO=0;
    int count3=0;
    int count5=0;
    int countBoth=0;
    int sumE=0;
    int sumO=0;


    bool flag=false;

    for(int i=1;i<=N;i++)
    {

        //1.Bascis
        if(i%2==0)//even
        {
            countE++;
            sumE+=i;
        }

         if(i%2!=0)//odd
        {
            countO++;
            sumO+=i;
        }

        //2.Divisibility statistics
        if(i%3==0)
        {
            count3++;
        }

        if(i%5==0)
        {
            count5++;
        }

        if(i%3==0 && i%5==0)
        {
            countBoth++;
        }

    }

    cout<<"Count of even numbers: "<<countE<<endl;
    cout<<"Count of odd numbers: "<<countO<<endl;
    cout<<"Sum of even numbers: "<<sumE<<endl;
    cout<<"Sum of odd numbers: "<<sumO<<endl;

    cout<<endl;

    cout<<"Divisible by 3: "<<count3<<endl;
    cout<<"Divisible by 5: "<<count5<<endl;
    cout<<"Divisible by both: "<<countBoth<<endl;

    //3.special search
    
    for(int i=N-1;i>=1;i--)
    {
        if(i%4==0 && i%6==0)
        {
            cout<<"Largest number less than N divisible by both: "<<i<<endl;
            flag=true;
            break;
        }
    }

    if(flag==false)
    {
        cout<<"No such number found which is largest number less than N divisible by both"<<endl;
    }

    //4.Comparision
    if(sumE > sumO)
    {
        cout<<"Even number is greater"<<endl;
    }
    else if(sumO > sumE)
    {
     cout<<"Odd number is greater"<<endl;
    }
    else
    {
        cout<<"Both number are same"<<endl;
    }

    return 0;

}