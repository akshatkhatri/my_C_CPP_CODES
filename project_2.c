#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void display_board(int game[10][10])
{
    int count = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            game[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%5d ", game[i][j]);
        }
        printf("\n");
    }
}

int random_number()
{
    return rand() % 6 + 1;
}

void update_board(int game[10][10], int *player1, int *player2)
{
    int temp1 = *player1;
    int temp2 = *player2;

    int count = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            game[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (game[i][j] == temp1)
            {
                game[i][j] = 'x';
            }
            else if (game[i][j] == temp2)
            {
                game[i][j] = 'o';
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (game[i][j] == 'x')
            {
                printf("%5c ", 'x');
            }
            else if (game[i][j] == 'o')
            {
                printf("%5c ", 'o');
            }
            else
            {
                printf("%5d ", game[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int game[10][10];
    int *player1 = &game[0][0];
    int *player2 = &game[0][0];
    int random1, random2;
    int check;
    int check2;

    display_board(game);

    srand(time(NULL));

    while (1)
    {
        printf("to roll dices press 1\n");
        scanf("%d", &check);

        if (check == 1)
        {
            random1 = random_number();
            printf("the dice rolled by player 1 (x)is - %d\n", random1);

            printf("to roll dice press 1\n");
            scanf("%d", &check2);
            if (check2 == 1)
            {
                random2 = random_number();
                printf("the dice rolled by player 2 (y)is - %d\n", random2);

                player1 = player1 + random1;
                player2 = player2 + random2;

                if (player1 >= &game[10][0])
                {
                    player1 = &game[9][player1 - &game[10][0] + 1];
                }
                if (player2 >= &game[10][0])
                {
                    player2 = &game[9][player2 - &game[10][0] + 1];
                }
                printf("\n\n new board is-\n");

               

                if (*player1 == 100)
                {
                    printf("Player 1 wins!\n");
                    break;
                }
                else if (*player2 == 100)
                {
                    printf("Player 2 wins!\n");
                    break;
                }
                 update_board(game, player1, player2);

                sleep(2); // Pause for one second before next turn
            }
        }
    }

    return 0;
}
