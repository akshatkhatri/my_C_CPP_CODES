// author-akshat khatri//
// date-27-06-2023//
//  write a function to shift left the elements and then use it on a 4*5 matrix//
#include <stdio.h>

void left_shift(int[4][5]);

int main()
{
    int matrix1[4][5];
    printf("Enter matrix 1 in row-major order:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    left_shift(matrix1);

    printf("Matrix 1 after left shift:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void left_shift(int arr[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5 - 2; j++)
        {
            arr[i][j] = arr[i][j + 2];
        }
        arr[i][3] = 0;
        arr[i][4] = 0;
    }
}
