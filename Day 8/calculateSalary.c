#include <stdio.h>
#define TAX 0.07
int main()
{
    printf("Enter the number: ");
    int RawAmount, lowamont, result;
    scanf("%d",&RawAmount);
    lowamont = RawAmount * TAX;
    result = RawAmount - lowamont;
    printf("The tax is: %f\n",TAX);
    printf("The main answer is: %d\n",result);
    return 0;
}
