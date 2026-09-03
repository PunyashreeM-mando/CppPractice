#include<iostream>
using namespace std;

void analyzeNumbers(int N);

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;

    analyzeNumbers(n);

    return 0;
}

void analyzeNumbers(int N)
{
    int countE=0;
    int countO=0;
    int countDiv3=0;
    int sumE=0;
    int sumO=0;
    int sumDiv3=0;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            countE++;
            sumE+=i;
        }

        if(i%2!=0)
        {
            countO++;
            sumO+=i;
        }

        if(i%3==0 && i%6!=0)
        {
            countDiv3++;
            sumDiv3+=i;
        }
    }

    cout<<"Count even: "<<countE<<endl;
    cout<<"Sum even: "<<sumE<<endl;
    cout<<endl;
    cout<<"Count odd: "<<countO<<endl;
    cout<<"Sum odd: "<<sumO<<endl;
    cout<<endl;
    cout<<"Count number divisible by 3 and not by 6: "<<countDiv3<<endl;
    cout<<"Sum fo the numbers divisible by 3 and not by 6: "<<sumDiv3<<endl;

}