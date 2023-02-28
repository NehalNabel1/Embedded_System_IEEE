#include <stdio.h>1
#include <stdlib.h>
# define max 10000
int main()
{
    int i,n,arr1[max],arr2[max];
    printf("Input size of array : ");
    scanf("%d",&n);
    printf("\nInput array elements:");
    for(i=0;i<n;i++){
           scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
           arr2[i]=arr1[n-i-1];
    }
    printf("\nArray elements after reverse: ");

      for(i=0;i<n;i++){
          printf("%d ,",arr2[i]);
      }




        return 0;
}
