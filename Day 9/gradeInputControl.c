#include <stdio.h>
int main(void)
{
    int grade, total = 0, avarage, counter = 0;

    while (counter <= 10)
    {
        counter++;

        printf("Enter the grade: ");
        scanf("%d",&grade);

        total += grade;

    }
    avarage = total / counter;
    printf("The Avarage is: %d",avarage);
}
