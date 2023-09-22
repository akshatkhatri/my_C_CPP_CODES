# include <stdio.h>
    int search_in_array(int*,int*);
    int main()
    {
        int numbers[]={1,2,7,7,7,5,8,3,4,10};
        printf("enter the number you want to search in the array(1to10)");
        int num,result;
        scanf("%d",&num);
        result=search_in_array(&numbers[0],&num);
        printf("no.of times the element comes in array is %d",result);
        return 0;
    }
    int search_in_array(int *ptr,int *num)
    {
        int count=0;;
        int num1=*num;
        for(int i=0;i<10;i++)
        {
            if(*(ptr+i)==num1)
            {
                count++;
            }
        }
        return count;
}
