//author-akshat khatri
//date-23-08-2023
//a function to create a vector of user given size M using new operator

#include<iostream>

int main()
{
    int M;
    std::cout<<"enter the size of the vector you want to create"<<std::endl;
    std::cin>>M;

    int *ptr=new int[M];
    std::cout<<"memory allocated"<<std::endl;
    delete [] ptr;

    return 0;


}