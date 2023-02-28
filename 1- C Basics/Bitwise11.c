#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,nth,newNum;
    printf("Input any number:");
    scanf("%d",&num);

    newNum = ~ num ;
    printf("Number after bits are flipped: %d (in decimal)",newNum);

    return 0;
}
