#include <stdio.h>1
#include <stdlib.h>
# define max 10000
int main()
{
    int i,j,n,d,arr1[max];
    printf("Input size of array : ");
    scanf("%d",&n);
    printf("\nInput array elements:");
    for(i=0;i<n;i++){
           scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){   //4
           for(j=i+1;j<n;j++){  //4 j=3  2
            if(arr1[i]>arr1[j]){
            d=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=d;
           }

    }
    }
    printf("\nArray sorted in ascending order: ");

   for(i=0;i<n;i++){
    printf("%d ,",arr1[i]);


   }




        return 0;
}
