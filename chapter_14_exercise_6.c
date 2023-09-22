// author-akshat khatri//
// date-26-06-2023//
//  a program to add two 6*6 matrices//
#include <stdio.h>
void add_matrix(int[6][6], int[6][6]);
int main()
{
    int matrix1[6][6] = {0};
    int matrix2[6][6] = {0};
    add_matrix(matrix1, matrix2);
    return 0;
}
void add_matrix(int matrix1[6][6], int matrix2[6][6])
{
    int sum_matrix[6][6] = {0};
    printf("enter the 1st matrix row order wise\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("enter the 2nd matrix row order wise \n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("the sum of matrix is\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }
}