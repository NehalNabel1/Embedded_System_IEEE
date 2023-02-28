#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int i , arr[max],n,max1=0,max2=0;
    printf("Input size: ");
    scanf("%d",&n);
     printf("Input array elements :");
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
     }

   for(i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1){
                max2=arr[i];

        }
   }
     printf("First large = %d \n",max1);
     printf("Second largest = %d",max2) ;

    return 0;
}
