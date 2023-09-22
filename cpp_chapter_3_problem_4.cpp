//author-akshat khatri
//date-24-08-2023
//writing a program to evaluate the investment equation

#include<iostream>
#include<cmath>
#include<string>


int main()
{
    
    long long int P,N;
    long double R;
    //int res;

    std::cout<<"enter the values of P,R & N"<<std::endl;
    std::cin>>P>>R>>N;

    std::cout<<"the value of V is"<<" "<<P*(pow((1+R),N));
    return 0;
}