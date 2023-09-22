/*a 5 digit number is entered through the keyboard add the digits present in it */
/*author-akshat khatri date 02/06/2023*/
#include<stdio.h>
int main()
{
int d1,d2,d3,d4,d5,num,newnum;
printf("enter the 5 digint number");
scanf("%d",&num);
d5=num%10;
num=num/10;
d4=num%10;
num=num/10;
d3=num%10;
num=num/10;
d2=num%10;
num=num/10;
d1=num%10;
//writing num=num/10 was useless here//
newnum=d1+d2+d3+d4+d5;/*sum of all the place values*/
printf("the sum of digits you entered through the keyboard are:%d",newnum);
return 0 ;
}





