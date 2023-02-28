#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;
    printf("Enter temperature in Celsius :");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit = %.2f F",f);

    return 0;
}
