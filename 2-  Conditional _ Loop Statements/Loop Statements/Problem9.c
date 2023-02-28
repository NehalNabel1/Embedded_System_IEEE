#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Input num:");
    scanf("%d",&n);
         for (int i=1;i<=10;i++){
                int sum = n*i;
            printf("%d * %d = %d\n",n,i,sum);


    }


    return 0;
}



