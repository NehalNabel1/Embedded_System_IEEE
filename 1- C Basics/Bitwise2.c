#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,msb,bits;
    printf("Input number:");
    scanf("%d",&num);
    bits = (sizeof(int)) * 8;
    msb = 1 << (bits - 1);

    if(num&msb)
      printf("Most Significant Bit (MSB) of %d is set (1).",num);
    else
      printf("Most Significant Bit (MSB) of %d is not (0).",num);

    return 0;
}
