#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,difference,Product,Modulus;
    float Quotient;
    printf ("First number :");
    scanf("%d",&num1);
     printf ("Second number :");
     scanf("%d",&num2);
     sum=num1+num2;
     difference=num1-num2;
     Product=num1*num2;
     Modulus=num1%num2;
     Quotient=num1/num2;
     printf("sum = %d\n",sum);
     printf("Difference = %d\n",difference);
     printf("Product = %d\n",Product);
     printf("Quotient = %f\n",Quotient);
     printf("Modulus = %d\n",Modulus);



    return 0;
}
