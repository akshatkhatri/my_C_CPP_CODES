//author-akshat khatri//
//date-24-06-2023//
//sorting an array through bubble sort//
#include<stdio.h>

void print_array(int *,int);
void sort_array(int *,int);
void swap_numbers(int *,int *);
int main()
{
    int n;
    printf("enter the no. of elements you will  enter\n");
    scanf("%d",&n);
    int numbers[n];
    printf("enter the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
  
    printf("\n");
    printf("the bubble sorted array is \n");
    sort_array(&numbers[0],n);
    print_array(&numbers[0],n);
    return 0;
}
void sort_array(int *ptr,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+(j+1))=temp;
            }
        }
    }
    
}
/*void swap_numbers(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}*/
void print_array(int *ptr1,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr1+i));
    }
}