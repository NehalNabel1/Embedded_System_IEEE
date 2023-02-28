#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;

    printf("Input upper limit:");
    scanf("%d",&n);
         for (int i=0;i<=n;i++){
            sum+=i;

    }
    printf("Sum of natural numbers 1-%d:%d",n,sum);

    return 0;
}

