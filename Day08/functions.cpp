#include<iostream>
using namespace std;

    /*void square(int n)
    {
        cout<<"The square of the number is: "<<n*n<<endl;
    }

    int main()
    {

        int n;
        cout<<"Enter the number n: ";
        cin>>n;

        square(n);

        return 0;
    }*/

    int square(int N)
    {
        return N*N;
    }

    int main()
    {
        int n;
        cout<<"Enter the number n: ";
        cin>>n;

        int result = square(n);
        cout<<result;
    }