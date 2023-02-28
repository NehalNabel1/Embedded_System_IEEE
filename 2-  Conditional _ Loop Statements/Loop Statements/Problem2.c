#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Input N:");
    scanf("%d",&n);
     printf("Natural numbers from 10-1 in reverse:\n ");
    for (int i=n;i>=1;i--){
            printf("%d,",i);

    }

    return 0;
}



