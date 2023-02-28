#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,LSB ;
    printf("Input number:");
    scanf("%d",&num);


    if(num & 1) {
    printf("%d is odd",num);
    }
    else{
     printf("%d is even",num);}
    return 0;
}
