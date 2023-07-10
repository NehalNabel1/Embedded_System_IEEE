#include <stdio.h>
#include <stdlib.h>
#include "counter.h"
int main()
{
    int num_of_set,reg;
    printf("Enter The Value Of The Register :\n");
    scanf("%d",&reg);
     num_of_set = Counter_Set(reg);
     printf("The number of bits set to 1 is : %d",num_of_set);

    return 0;
}
