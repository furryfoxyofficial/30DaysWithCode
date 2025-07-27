#include <stdio.h>
int main()
{
    int start = 0,current = 0;
    start = 1;
    while (current < 5000)
    {
        current += start;
        start = current;
        printf("The current value is: %d \n",current);
    }
    return 0;
}
