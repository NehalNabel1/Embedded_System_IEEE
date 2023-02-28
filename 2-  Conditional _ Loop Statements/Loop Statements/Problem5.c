#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Input upper limit:");
    scanf("%d",&n);
     printf("Odd numbers between 1 to %d:\n ",n);
    for (int i=0;i<=n;i++){
            if(i%2!=0){
            printf("%d,",i);
            }

    }

    return 0;
}

