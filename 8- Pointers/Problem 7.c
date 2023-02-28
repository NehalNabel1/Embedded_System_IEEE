#include <stdio.h>
#include <stdlib.h>
#define Max 100
void print_arry (int arr[],int n);
void input_array(int arr[],int n);

int main()
{
    int size;
    int arr[Max];
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Input array elements:");
    input_array(arr,size);

    int *left=arr;
    int *right=&arr[size-1];
    while(left<=right){
        *left^=*right;
        *right^=*left;
        *left^=*right;
        left++;
        right--;

    }

    print_arry(arr,size);




       return 0;
}

void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }



}

void print_arry (int arr[],int n){

 for(int i=0;i<n;i++){
            printf("%d ", *(arr + i));

    }
    printf("\n");
}


