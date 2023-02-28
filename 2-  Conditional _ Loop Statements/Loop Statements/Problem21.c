#include <stdio.h>
#include <stdlib.h>

int main()
{

     int base,exponent ;
     long long power =1ll;

     printf("Input base:");
     scanf("%d", &base);
     printf("Input exponent:");
     scanf("%d",&exponent);
     for (int i=0;i<exponent;i++){
        power=power *base;
     }

    printf("%d ^ %d = %lld",base,exponent,power);



    return 0;
}
