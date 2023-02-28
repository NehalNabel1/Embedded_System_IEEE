#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1,s2,s3,s4,s5,Avrage,Total,Percentage;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    Total=s1+s2+s3+s4+s5;
    Avrage=Total/5;
    Percentage=(Total/500)*100;

    printf("Total = %.2f\n",Total);
    printf("Average = %.2f\n",Avrage);
    printf("Percentage = %.2f ",Percentage);

    return 0;
}
