#include <stdio.h>
#include <stdlib.h>
#define Max 100
void print_array(int arr[],int size);
void Input_array(int arr[],int size);
void ascending_order (int arr[],int size);
void descending_order(int arr[],int size);
int main()
{

    int arr[Max],size;
    printf("Input array size :");
    scanf("%d",&size);
    printf("Input array elements:");
    Input_array(arr,size);
    ascending_order(arr,size );
    printf("Array in ascending order: ");
    print_array(arr,size);
    descending_order(arr,size);
    printf("Array in descending order:");
    print_array(arr,size);



       return 0;
}




void Input_array(int arr[],int size){

for(int i=0;i<size;i++){
    scanf("%d",arr+i);
}

}
void print_array(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d ,",*(arr+i));
}
printf("\n");


}
   //descending order
void descending_order(int arr[],int size){

int *ptr=arr;
    int *ptr2=arr+1;
    int *end =&arr[size-1];
    int i=1;
    while(ptr<=end){
            ptr2=arr+i;
            i++;
            while(ptr2<=end){

        if(*ptr<*ptr2){
         *ptr^=*ptr2;
         *ptr2^=*ptr;
         *ptr^=*ptr2;

        }
        ptr2++;
            }
        ptr++;
    }


}
//ascending order
void ascending_order (int arr[],int size){
int *ptr=arr;
    int *ptr2=arr+1;
    int *end =&arr[size-1];
    int i=1;
    while(ptr<=end){
            ptr2=arr+i;
            i++;
            while(ptr2<=end){

        if(*ptr> *ptr2){
         *ptr^=*ptr2;
         *ptr2^=*ptr;
         *ptr^=*ptr2;

        }
        ptr2++;
            }
        ptr++;
    }

}

