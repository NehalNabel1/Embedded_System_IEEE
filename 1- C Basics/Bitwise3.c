#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,nth,bitStatus;
    printf("Input number: ");
    scanf("%d",&num);
    printf("Input nth bit number:");
    scanf("%d",&nth);
    bitStatus = (num >> nth) & 1;
    if(bitStatus==1)
    printf("%d bit of %d is set (1)",nth,num);
    else
    printf("%d bit of %d is not set (0)",nth,num);

    return 0;
}
