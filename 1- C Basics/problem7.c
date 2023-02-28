#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,meter,kilometer;
    printf("Enter length in centimeter = ");
    scanf("%f",&length);
    meter=length/100;
    kilometer=length/100000;
    printf("Length in meter = %f m\n",meter);
    printf("Length in kilometer = %f km",kilometer);

    return 0;
}
