#include <stdio.h>
#include <stdlib.h>

int main()
{
    double exponent,base,power;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter exponent:");
    scanf("%lf",&exponent);
    power=pow(base,exponent);

    printf("%.2lf ^ %.2lf = %.2lf",base,exponent,power);

    return 0;
}
