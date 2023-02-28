#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int i , arr1[max],arr2[max],n;
    printf("Input size: ");
    scanf("%d",&n);
    printf("Input array 1 elements: ");
     for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
    arr2[i]=arr1[i];
     }
   printf("Array1 : ");
    for(i=0;i<n;i++){

        printf("%d ,",arr1[i]);
      }
   printf("\nArray2: ");
       for(i=0;i<n;i++){

        printf("%d ,",arr2[i]);
      }


        return 0;
}
