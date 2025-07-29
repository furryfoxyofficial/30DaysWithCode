#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct
{
    int *data;
    int size;
    int capacity;
} myarr;

void initArray(myarr* a)
{
    a->size = 0;
    a->capacity = 5;
    a->data = (int*)malloc(a->capacity * sizeof(int));
    if (a->data == NULL)
    {
        printf("Memmory Alloc not working! ;*\n");
        exit(1);
    }
}

void pushArray(myarr* a,int inputData)
{
    if (a->size == a->capacity)
    {
        a->capacity *= 2;
        a->data = (int*)realloc(a->data, a->capacity * sizeof(int));
        if (a->data == NULL)
        {
            printf("Memmory Realloc not working! ;*\n");
            exit(1);
        }
        a->data[a->size] = inputData;
        a->size++;
    }
}

void freeArray(myarr *a)
{
    free(a->data);
}

void finalShow(int grade)
{
    if (grade <= 10)
    {
        printf("You suck bitch! Now drink my c*ms! F\n");
    }
    else if (grade >= 10 && grade <= 30)
    {
        printf("Nah you are still worst! E\n");
    }
    else if (grade >= 31 && grade <= 50)
    {
        printf("Nah you are going to be good but still you must suck my d*ck! D\n");
    }
    else if (grade >= 51 && grade <= 70)
    {
        printf("You're good now! I love you! C\n");
    }
    else if (grade >= 71 && grade <= 90)
    {
        printf("You're best of class! B\n");
    }
    else
    {
        printf("You're legend :D! A\n");
    }
}

int main()
{
    myarr a;

    initArray(&a);

    int student;

    while (1)
    {
        printf("Enter the student grade: ");
        scanf("%d",&student);

        if (student == -1)
        {
            break;
        }

        pushArray(&a,student);

        finalShow(student);
    }
    freeArray(&a);
    return 0;
}
