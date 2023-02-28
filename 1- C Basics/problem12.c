#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num,sq;
    printf("Enter any number:");
    scanf("%f",&num);
    sq=sqrt(num);
    printf("Square root of %.2f = %.2f",num,sq);

    return 0;
}
