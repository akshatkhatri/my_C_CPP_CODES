//author-akshat khatri//
//date-03/06/2023//
// to determine the profit or loss incurred by a seller//
#include<stdio.h>
int main()
{
float cp,sp,l,p;
printf("enter the cost price and selling price");
scanf("%f,%f",&cp,&sp);
p=sp-cp;
l=cp-sp;
if(p>0) // note here ; is not used//
    printf("the profit incurred by the seller is:%f",p);
if(l>0)//same ; not used//
    printf("the losses incurred by the seller is %f",l);
if(p==0)
    printf("no loss or profit incurred by the seller");
return 0;  


}
