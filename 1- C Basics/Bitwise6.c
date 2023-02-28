#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,nth,newNum;
    printf("Input nth bit to toggle:");
    scanf("%d",&num);
    printf("Input nth bit to toggle:");
    scanf("%d",&nth);
    newNum = num ^ (1 << nth);
    printf("After toggling nth bit: %d (in decimal)",newNum);

    return 0;
}
