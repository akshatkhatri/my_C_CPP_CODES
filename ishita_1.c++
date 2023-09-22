#include<iostream>
using namespace std;
int main()
{
    int maths,physics,chemistry,sum,avg;
    cout<<"please enter the marks of maths"<<endl;
    cin>>maths;
    cout<<"please enter the marks of physics"<<endl;
    cin>>physics;
    cout<<"please enter the marks of chemistry"<<endl;
    cin>>chemistry;
    cout<<maths<<" "<<physics<<" "<<chemistry<<" "<<endl;
    sum=maths+physics+chemistry;
    avg=sum/3;
    cout<<"the sum is equal to"<<" "<<sum<<endl;
    cout<<"the average is equal to"<<" "<<avg<<endl;

}