#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,nth,newNum;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit to clear :");
    scanf("%d",&nth);
    newNum = num & (~ (1 << nth));
    printf("Number after clearing nth bit: %d (in decimal)",newNum);

    return 0;
}
