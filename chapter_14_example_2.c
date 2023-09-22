//author-akshat khatri//
//date-26-06-2023//
//write a program to obtain the transpose of a 3*5 matrix//
#include<stdio.h>
void print_transpose(int[3][5]); 
int main()
{
    int matrix [][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    printf("the 2-D array is-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nthe matrix after transpose is -\n");
    print_transpose(matrix);
    return 0;

}
void print_transpose(int matrix[3][5])
{
    int matrix_trans[5][3];
    int i,j;
    for( i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            matrix_trans[i][j]=matrix[j][i];
            printf("%d ",matrix_trans[i][j]);
        }
        printf("\n");
    }
    
}