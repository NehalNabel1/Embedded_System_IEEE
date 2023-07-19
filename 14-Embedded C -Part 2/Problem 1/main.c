#include <stdio.h>
#include <stdlib.h>
#include "Sum_Of_Array.h"
#define MAX 1000
int main()
{
    int arr[MAX];
    int size ,sum;
    printf("Enter the size of the array : \n");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for(int i=0;i<size ;i++){
        scanf("%d",&arr[i]);
    }
    sum=Sum_Of_Elements(arr,size);
    printf("\nSum of its elements is : %d",sum);
    return 0;
}
