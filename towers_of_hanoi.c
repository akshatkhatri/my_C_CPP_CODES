//author-akshat khatri
//date-12-07-2023
//tower of hanoi problem
#include<stdio.h>
void towers_of_hanoi(int n ,int base ,int aux ,int end)
{
    if(n==1)
    {
        printf("move disk 1 from %d to %d\n",base,end);
        return;
    }
    towers_of_hanoi(n-1,base,aux,end);
    printf("move disk %d from peg %d to %d\n",n,base,end);
    towers_of_hanoi(n-1,aux,end,base);
}
int main()
{
    int n;
    printf("the no.of disks you want to enter\n");
    scanf("%d",&n);
    towers_of_hanoi(n,1,2,3);
}
