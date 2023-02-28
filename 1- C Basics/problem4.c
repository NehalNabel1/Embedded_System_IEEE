#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length ,width,Perimeter;
   printf("Enter length:");
   scanf("%d",&length);
   printf("Enter width:");
   scanf("%d",&width);
   Perimeter=(length+width)*2;
   printf("Perimeter of rectangle = %d units\n",Perimeter);



    return 0;
}
