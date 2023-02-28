#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long num;
    int count = 0;


    printf("Input num:");
    scanf("%lld", &num);

    do
    {

        count++;
         num /= 10;
    } while(num != 0);

    printf("Number of digits:%d", count);



    return 0;
}
