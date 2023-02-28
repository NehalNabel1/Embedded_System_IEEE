#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long product = 1ll;
    int lastdigit ,num;


    printf("Input num:");
    scanf("%d", &num);
    do{
            lastdigit = num %10;
       product = product*lastdigit;
        num =num/10;
    }while(num>0);


    printf("%lld", product);



    return 0;
}

