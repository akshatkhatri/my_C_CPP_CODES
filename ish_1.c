// ishita
// date 09/07/23
// while loops
#include <stdio.h>
#include<windows.h>
int main()
{
  int computerpick;
  int num = 1;
  int i = 0;
  int total_matchsticks = 0;

  printf("welcome to matchstick game\n");
  while (i <= 5)
  {
    printf("\nplease enter your number\n");
    printf("number must be from 1 to 4, no other number would be considered\n"),
        scanf("%d", &num);
    if (num <= 4)
    {
      printf("your entered number=%d\n", num);
      computerpick = (5 - num);
      printf("the computer pick would be =%d\n", computerpick);

      total_matchsticks = total_matchsticks + computerpick + num;
      printf(" total matchsticks would be %d\n", total_matchsticks);
    }
    else
    {
      printf("the entered value is invalid\n ");
      break;
    }
    if (total_matchsticks > 21)
    {
      printf("\ncomputer wins the game\n");
      Beep(1000,1000);
      break;
    }

    i++;
  }

  return 0;
}
