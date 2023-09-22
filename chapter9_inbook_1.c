//author-akshat khatri//
//date-17-06-2023//
//pointers applications//
#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("address of i=%d\n",&i);
    printf("address of i=%d\n",j);
    printf("address of i=%d\n",*k);
    printf("address of j=%d\n",k);
    printf("address of j=%d\n",&j);
    printf("address of k=%d\n",&k);
    printf("value of j=%d\n",j);
    printf("value of k=%d\n",k);
    printf("value of i=%d\n",i);
    printf("value of i=%d\n",*j);
    printf("value of i=%d\n",**k);
    printf("value of i=%d\n",*(&i));
    return 0;    
}