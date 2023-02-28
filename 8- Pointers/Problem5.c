#include <stdio.h>
#include <stdlib.h>
#define Max 100
void print_arry (int arr[],int n);
void print_address (int arr[],int n);

int main()
{
    int n;
    int arr1[Max],arr2[Max];
    int *ptr1=arr1;
    int *ptr2=arr2;
    int *end;

    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Input array1 elements:");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr1+i));
    }
    end=&arr1[n-1];

    printf("Array1: ");
    print_arry(arr1,n);
    printf("Address of array2 :");
    print_address(arr1,n);


    while( ptr1 <=end){
           *ptr2 = *ptr1;
           ptr1++;
           ptr2++;

    }
    printf("Array2: ");
    print_arry(arr2,n);
    printf("Address of array2 :");
    print_address(arr2,n);
       return 0;
}

void print_arry (int arr[],int n){

 for(int i=0;i<n;i++){
            printf("%d ", *(arr + i));

    }
    printf("\n");
}

void print_address (int arr[],int n){

 for(int i=0;i<n;i++){
            printf("%d ", arr + i);

    }
    printf("\n");
}
