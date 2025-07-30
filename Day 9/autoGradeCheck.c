#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct
{
    int *data;
    int size;
    int capacity;
} myarr;

void initArray(myarr *a)
{
    a->capacity = 5;
    a->size = 0;
    a->data = (int*)malloc(a->capacity * sizeof(int));
    if (a->data == NULL)
    {
        printf("Can\'t make allocing array");
        exit(1);
    }
}

void pushArray(myarr *a, int inputData)
{
    if (a->size == a->capacity)
    {
        a->capacity *= 2;
        a->data = (int*)realloc(a->data, a->capacity * sizeof(int));
        if (a->data == NULL)
        {
            printf("Can\'t realocating the data in app");
            exit(1);
        }
        a->data[a->capacity] = inputData;
        a->size++;
    }
}

void freeArray(myarr *a)
{
    free(a->data);
}

void printData(int pass, int fails, int counts)
{
    printf("passes: %d and failes: %d and allCounts: %d", pass,fails,counts);
}

int main(void)
{
    myarr a;
    initArray(&a);

    int student_grades, passes = 0, fails = 0, count = 0;

    while (1)
    {
        printf("\nEnter the grades: ");
        scanf("%d",&student_grades);
        printf("\n\n");

        pushArray(&a,student_grades);

        if (student_grades > 50)
        {
            passes++;
        }
        else
        {
            fails++;
        }
        count++;

        printData(passes,fails,count);
    }
}
