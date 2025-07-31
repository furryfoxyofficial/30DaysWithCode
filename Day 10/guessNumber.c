#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(0));
    int randomAnswer = rand() % 100 + 1;

    int guessnumber;

    do
    {
        printf("guess a number between 1 to 100: ");
        scanf("%d",&guessnumber);

        printf("Your guess is : %d",guessnumber);

        if (guessnumber == randomAnswer)
        {
            printf("Your guess was right! %d", guessnumber);
        }
        else if (guessnumber >= randomAnswer)
        {
            printf("Your guess was not right! %d and number was: %d", guessnumber,randomAnswer);
        }
        else if (guessnumber <= randomAnswer)
        {
            printf("Your guess was not right! %d and number was: %d", guessnumber,randomAnswer);
        }
        else
        {
            printf("Error!");
        }
    } while (guessnumber != randomAnswer);
}
