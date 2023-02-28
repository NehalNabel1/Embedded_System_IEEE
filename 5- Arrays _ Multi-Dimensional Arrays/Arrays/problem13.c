#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int i,j,arr[max],n,d=0;
    printf("Input size: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\nInput array elements:");
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){ //4 4 6 4 6
                //if(j!=h){
                if(arr[i]==arr[j]){

                    d++;
                    break;
                }


           }

    }
    printf("Total number of duplicate elements = %d",d);






        return 0;
}
