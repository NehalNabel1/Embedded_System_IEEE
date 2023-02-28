#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic ,gross,HRA,DA;
    printf("Input basic salary of an employee:");
    scanf("%f",&basic);

   if( basic<= 10000 ){
       HRA =basic *0.2;
       DA = basic *0.8;
      gross =HRA + DA + basic;

}
   else  if( basic>10000 &&basic <=20000){
       HRA =basic *0.25;
       DA = basic *0.9;
      gross =HRA + DA + basic;

}
   else if( basic>= 20001){
       HRA =basic *0.3;
       DA = basic *0.95;
      gross =HRA + DA + basic;

}
   printf("Gross salary =%.2f",gross);
    return 0;
}



