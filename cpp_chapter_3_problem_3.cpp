// author-akshat khatri
// date-23-08-2023
//  a program to print a sequence os numbers using a for loop

#include <iostream>
#include<iomanip>

int main()
{
    int num ;
    std::cout<<"enter till which numer you want the sequence"<<std::endl;
    std::cin>>num;

    int counter = 1;
    int print=1;

    while (num >= counter)
    {

        for (int i = 1; i <= counter; i++)
        {            
            std::cout<<std::setw(num) << print << " ";
        }
        print++;
        std::cout << std::endl;
        counter++;
    }
    fflush(stdin);//this too

    std::cin>>num;//ignore this line
    return 0;
}