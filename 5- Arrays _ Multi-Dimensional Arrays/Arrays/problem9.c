#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int i,arr[max],n,element,position;
    printf("Input size: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\nInput array elements:");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    printf("\nInput element to insert:");
    fflush(stdin);
    scanf("%d",&element);
    printf ("\nInput position where to insert:");
    fflush(stdin);
    scanf("%d",&position);

    if(position >n || position<=0){
        printf("Invalid position! Please enter position between 1 to %d",n);
    }
    else{
         for(i=n; i>=position; i--)
        {
            arr[i] = arr[i-1];
        }
         arr[position-1] =element;
        n++;


    printf("\nElements of array are: ");

    for(i=0;i<n;i++){

            printf("%d ,",arr[i]);

    }
    }
        return 0;
}
