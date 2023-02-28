#include <stdio.h>
#include <stdlib.h>
#define Max 100
void print_arry (int arr[],int n);
void print_address (int arr[],int n);

int main()
{
    int size;
    int arr1[Max],arr2[Max],arr3[Max];
    int *ptr1=arr1;
    int *ptr2=arr2;
    int *ptr3=arr3;
    int *end1;

    printf("Enter size of arrays :");
    scanf("%d",&size);
    printf("Input first array:");
    for(int i=0;i<size;i++){
        scanf("%d",(ptr1+i));
    }
    end1=&arr1[size-1];


    printf("Input Second array:");
    for(int i=0;i<size;i++){
        scanf("%d",(ptr2+i));
    }


    while(ptr1<=end1){

    *ptr3=*ptr1;
    *ptr1=*ptr2;
     ptr1++;
     ptr2++;
     ptr3++;}
     printf("First array after swapping: ");
     print_arry(arr1,size);

     ptr3=&arr3;
     ptr2=&arr2;
     int *end3=&arr3[size-1];

     while(ptr3 <=end3){

        *ptr2=*ptr3;

         ptr2++;
         ptr3++;

     }
     printf("\nSecond array after swapping: ");
        print_arry(arr2,size);



       return 0;
}

void print_arry (int arr[],int n){

 for(int i=0;i<n;i++){
            printf("%d ", *(arr + i));

    }
    printf("\n");
}








