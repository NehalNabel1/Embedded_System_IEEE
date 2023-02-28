#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,s,t ;
    printf("Input first side: ");
    scanf("%d",&f);
    printf("Input second side: ");
    scanf("%d",&s);
    printf("Input third side: ") ;
    scanf("%d",&t);
    if(f==s && s==t){

        printf("Triangle is equilateral triangle");
     }

      else if (f==s || f==t ||s==t){
            printf("Triangle is isosceles triangle");
      }
      else {
        printf("Triangle is scalene triangle");}


    return 0;
}
