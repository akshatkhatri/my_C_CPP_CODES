//author-akshat khatri
//date-23-08-2023
// writing a functions using reference variables as arguents to swap the variables

#include<iostream>

void swap(int &a,int &b)//storing the values as references to reflect changes
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int num1,num2;
    std::cout<<"enter the 1st number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter the 2nd number"<<std::endl;
    std::cin>>num2;

    std::cout<<"values before swapping are"<<" "<<num1<<" "<<num2<<std::endl;
    swap(num1,num2);
    std::cout<<"values after swapping are"<<" "<<num1<<" "<<num2<<std::endl;

    return 0;
}