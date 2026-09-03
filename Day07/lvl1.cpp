#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the number N: ";
    cin>>N;

    int count3=0;
    int count5=0;
    int countBoth=0;
    int countNeither=0;
    int sumNeither=0;
    int sumBoth=0;

    for(int i=1;i<=N;i++)
    {
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
            sumBoth += i;
        }

        if(i%3!=0 && i%5!=0)
        {
            countNeither++;
            sumNeither+=i;
        }
    }

    cout<<"Divisible by 3: "<<count3<<endl;
    cout<<"Divisible by 5: "<<count5<<endl;
    cout<<"Divisible by both: "<<countBoth<<endl;
    cout<<"Divisible by neither: "<<countNeither<<endl;
    cout<<"Sum of neither: "<<sumNeither<<endl;
    cout<<"Sum of both: "<<sumBoth<<endl;
    
    if(sumNeither > sumBoth)
    {
        cout<<"Sum of neither is greater than sum of both"<<endl;
    }
    else
    {
        cout<<"Sum of neither is less than sum of both"<<endl;
    }
    return 0;

}