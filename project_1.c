// author-akshat khatri//
// date-27-06-2023//
// tic-tac-toe game//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char game[3][3];

void initializeBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf("---------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", game[i][j]);
        }
        printf("|\n");
    }
    printf("---------\n");
}

int checkWin(char player)
{

    for (int i = 0; i < 3; i++)
    {
        if (game[i][0] == player && game[i][1] == player && game[i][2] == player)
        {
            return 1;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (game[0][j] == player && game[1][j] == player && game[2][j] == player)
        {
            return 1;
        }
    }

    if (game[0][0] == player && game[1][1] == player && game[2][2] == player)
    {
        return 1;
    }
    if (game[0][2] == player && game[1][1] == player && game[2][0] == player)
    {
        return 1;
    }

    return 0;
}

void makePlayerMove()
{
    int row, column;

    printf("Enter your move (row column): ");
    scanf("%d %d", &row, &column);

    if (row < 0 || row >= 3 || column < 0 || column >= 3 || game[row][column] != ' ')
    {
        printf("Invalid move. Try again.\n");
        makePlayerMove();
    }
    else
    {
        game[row][column] = 'O';
    }
}

void makeComputerMove()
{
    int row, column;

    printf("Computer's turn.\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (game[i][j] == ' ')
            {

                game[i][j] = 'X';
                if (checkWin('X'))
                {
                    return;
                }

                game[i][j] = 'O';
                if (checkWin('O'))
                {
                    game[i][j] = 'X';
                    return;
                }

                game[i][j] = ' ';
            }
        }
    }

    // Generate a random move
    do
    {
        row = rand() % 3;
        column = rand() % 3;
    } while (game[row][column] != ' ');

    game[row][column] = 'X';
}

int checkDraw()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (game[i][j] == ' ')
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    srand(time(NULL));

    printf("Welcome to Tic-Tac-Toe!\n");

    initializeBoard();

    while (1)
    {
        printBoard();

        makePlayerMove();

        if (checkWin('O'))
        {
            printf("Congratulations! You win!\n");
            break;
        }

        if (checkDraw())
        {
            printf("It's a draw!\n");
            break;
        }

        makeComputerMove();

        if (checkWin('X'))
        {
            printBoard();
            printf("Sorry, you lose.\n");
            break;
        }

        if (checkDraw())
        {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}
