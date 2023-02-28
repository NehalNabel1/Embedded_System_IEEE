#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float getdiameter(float r);
float getCircumference(float r);
float getArea(float r);
int main()

{
    float r;
    printf("Input radius:");
    scanf("%f",&r);

   printf("Diameter = %.2f units\n",getdiameter(r));
   printf("Circumference = %.2f units\n",getCircumference(r));
   printf("Area = %.2f sq. units",getArea(r));

}
float getdiameter(float r){
return 2*r;
}
 float getCircumference(float r){

 return  2*r*M_PI;
 }
 float getArea(float r){
 return r*r*M_PI;
 }





