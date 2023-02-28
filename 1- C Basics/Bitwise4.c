#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,nth,newNum;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit to set:");
    scanf("%d",&nth);
    newNum = (1 << nth) | num;
    printf("Number after setting nth bit: %d in decimal",newNum);

    return 0;
}
