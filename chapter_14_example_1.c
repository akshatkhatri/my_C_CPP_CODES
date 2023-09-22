// author-akshat khatri//
// date-26-06-2023//
// write a program to print the largest number from a 5*5 column matrix//
#include <stdio.h>

int main()
{
    int matrix[5][5] =
        {
            {11, 1, 7, 9, 7},
            {21, 25, 78, 98, 102},
            {18, 71, 45, 64, 9},
            {67, 212, 58, 49, 0},
            {23, 99, 999, 9999, 100000}};
    int i, j, big;
    big = matrix[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrix[i][j] > big)
            {
                big = matrix[i][j];
            }
        }
    }
    printf("%d", big);
    return 0;
}
