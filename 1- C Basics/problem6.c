#include <stdio.h>
#include <stdlib.h>

int main()
{
    float redius,Diameter,Circumference,Area;
    printf("Enter radius: ");
    scanf("%f",&redius);
    Diameter=redius*2;
    Circumference=(2*redius*3.14);
    Area = redius*redius*3.14;
    printf("Diameter = %.2f units\n",Diameter);
    printf("Circumference = %.2f units\n",Circumference);
    printf("Area = %.2f sq. units",Area);


    return 0;
}
