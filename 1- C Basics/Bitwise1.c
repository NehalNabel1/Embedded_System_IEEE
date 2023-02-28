#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,LSB;
    printf("Input number:");
    scanf("%d",&num);
    LSB=num&1;
    if(LSB==1)
    printf("Least Significant Bit of %d is set (1).",num);
    else
    printf("Least Significant Bit of %d is unset (0).",num);


    return 0;
}
