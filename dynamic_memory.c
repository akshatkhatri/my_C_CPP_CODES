// author-akshat khatri//
// date-01-07-2023//
// usage of malloc calloc realloc and free//
#include <stdio.h>
#include <stdlib.h>

// the use of malloc//

int main()

{
    /*int *ptr;
    int n;
    printf("enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the %d value\n",i);
        scanf("%d",&ptr[i]);

    }
    for(int i=0;i<n;i++)
    {
        printf("the value at %d of array is %d\n",i,ptr[i]);
    }
*/

    // the use of calloc//
   /* int *ptr;
    int limit;
    printf("enter the number of size you want to create\n");
    scanf("%d", &limit);
    ptr = (int *)calloc(limit, sizeof(int));
    for(int i=0;i<limit;i++)
    {
        printf("enter the numbet at %d you want to enter\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<limit;i++)
    {
        printf("the value at %d of array is %d\n",i,ptr[i]);
    }
}*/
//usage of realloc in c//
/*
int *ptr;
int limit2;
printf("enter the size of the new array you want to create\n");
scanf("%d",&limit2);
ptr=(int *)realloc(ptr,limit2*sizeof(int));
ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }
    */

//usage of free function is//
/*
free(ptr);
*/

return 0;
}























