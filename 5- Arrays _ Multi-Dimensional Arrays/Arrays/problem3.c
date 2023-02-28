#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int arr[max],n,sum=0;
    printf("Input size: ");
    scanf("%d",&n);
     printf("Input elements: ");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
 }

   printf("Sum of all elements : %d",sum);

    return 0;
}
