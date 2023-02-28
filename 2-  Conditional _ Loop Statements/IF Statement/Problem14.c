#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,s,t ;
    printf("Input first angle: ");
    scanf("%d",&f);
    printf("Input second angle: ");
    scanf("%d",&s);
    printf("Input third angle: ") ;
    scanf("%d",&t);
    if(f !=0 && s!=0 && t!=0 && (f+s+t)==180){

                printf("The triangle is valid");
     }
     else {
                printf("The triangle is not valid");
        }





    return 0;
}
