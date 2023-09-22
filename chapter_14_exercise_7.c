//author-akshat khatri//
//date-27-06-2023//
//write a program to multiply and two 3*3 matrices//
#include<stdio.h>
void multiply_matrix(int [3][3],int [3][3]);
int main()
{
    int matrix1[3][3]={0};
    int matrix2[3][3]={0};

    printf("enter the 1st matrix\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the 2nd matrix\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    multiply_matrix(matrix1,matrix2);
    return 0;
    
}
void multiply_matrix(int matrix1[3][3],int matrix2[3][3])
{
    int matrix3[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            matrix3[i][j]=0;
            for(int k=0;k<3;k++)
            {
            matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("the multiplied matrix is\n");
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
}