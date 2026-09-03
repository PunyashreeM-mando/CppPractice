#include<iostream>

int main()
{

    int time;
    int i;

    std::cout<<"Enter the number of seconds for the blast : ";
    std::cin>>time;

    for(i = time; i >= 0 ; i--)
    {
        std::cout<<i<<'\n';
    }

    std::cout<<"Abdul says : BOOM!!!";

    return 0;

}