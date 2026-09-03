#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

    //int sum =0;

    /*for(int i=1;i<=N;i++)//sum
    {
        if(i%3==0)
        {
             sum +=i;
        }
    }

    cout<<"The final answer is: "<<sum;

    int count =0;
    for(int i=1;i<=N;i++)
    {
        if(i%4==0 && i%8!=0)
        {
            count++;
        }
    }

    cout<<"The count is:  "<<count;

    int product = 1;
    for(int i=1;i<=N;i++)
    {
        product *= i;
    }

    cout<<"The product of all the numbers is: "<<product;

    bool flag = false;
    for(int i=1;i<=N;i++)
    {
        if(i>50 && i%7==0)
        {
            cout<<i;
            flag = true;
            break;
        }
    }

    if(flag==false)
    {
        cout<<"No such number found";
    }

    int eCount = 0, oCount = 0, eSum = 0, oSum = 0;
    for(int i = 1;i<=N;i++)
    {
        //even count
        if(i%2==0)
        {
            eCount++;
            eSum += i;
        }

        if(i%2!=0)
        {
            oCount++;
            oSum += i;
        }
    }

    cout<<"Even numbers count is: "<<eCount<<endl;
    cout<<"Odd numbers count is: "<<oCount<<endl;
    cout<<"Even numbers sum is: "<<eSum<<endl;
    cout<<"Odd numbers sum is: "<<oSum<<endl;

    int sum3=0;
    int sum5 =0;
    int count3=0;
    int count5=0;
    int count3A5=0;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0)
        {
            count3++;
            sum3 += i;
        }

        if(i%5==0)
        {
            count5++;
            sum5+=i;
        }
        if(i%3==0 && i%5==0)
        {
            count3A5++;
        }
    }

    cout<<"Divisible by 3: "<<count3<<endl;
    cout<<"Divisible by 5: "<<count5<<endl;
    cout<<"Divisible by 3 and 5: "<<count3A5<<endl;
    cout<<"Sum of multiples of 3: "<<sum3<<endl;
    cout<<"Sum of multiples of 5: "<<sum5<<endl;*/

    int count2=0;
    int count3=0;
    int countBoth=0;
    int countNeither=0;
    int sumNeither=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            count2++;
        }

        if(i%3==0)
        {
            count3++;
        }
        if(i%2!=0 && i%3!=0)
        {
            countNeither++;
            sumNeither += i;
        }

        if(i%2==0 && i%3==0)
        {
            countBoth++;
        }
    }

    cout<<"Divisible by 2: "<<count2<<endl;
    cout<<"Divisible by 3: "<<count3<<endl;
    cout<<"Divisible by 2 and 3: "<<countBoth<<endl;
    cout<<"Divisible by neither: "<<countNeither<<endl;
    cout<<"Sum of neither: "<<sumNeither<<endl;
    return 0;
}