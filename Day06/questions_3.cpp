#include<iostream>
using namespace std;

int main()
{
    int N;
    int sum=0;
    int factorial = 1;
    int count =0;
    cout<<"Enter the number: ";
    cin>>N;

   /* for(int i=1;i<=N;i++)//sum of first N numbers
    {
        sum += i;
    }

    cout<<"The sum of first N numbers is "<<sum<<endl;

    for(int i=1;i<=N;i++)//even numbers ka sum
    {
        if(i%2==0)
        {
            sum += i;
        }
    }

    cout<<"The sum of first N even numbers is "<<sum<<endl;

    for(int i=1;i<=N;i++)//odd numbers ka sum
    {
        if(i%2!=0)
        {
            sum += i;
        }
    }

    cout<<"The sum of first N odd numbers is "<<sum<<endl;*/

    for(int i=1;i<=N;i++) //factorila and product of n numbers
    {
        factorial = factorial * i;
    }

    cout<<"The factorial of the given number is: "<<factorial;

   /* for(int i =1;i<=N;i++) // counting the even numbers
    {
        if(i%2==0)
        {
            count++;
        }
    }

    cout<<"The number of even numbers are: "<<count;

    for(int i =1;i<=N;i++) // counting the odd numbers
    {
        if(i%2!=0)
        {
            count++;
        }
    }

    cout<<"The number of odd numbers are: "<<count;*/
    return 0;
}