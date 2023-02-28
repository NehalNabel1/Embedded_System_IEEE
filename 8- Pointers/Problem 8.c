#include <stdio.h>
#include <stdlib.h>
#define Max 100

void input_array(int arr[],int n);
void search(int arr[],int n,int element);

int main()
{
    int size,element;
    int arr[Max];
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Input array elements:");
    input_array(arr,size);
    printf("Input element to search: ");
    scanf("%d",&element);
    search(arr,size,element);

       return 0;
}

void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }



}
void search(int arr[],int n,int element){

int *end=&arr[n-1];
int *ptr=arr;
int i=0,check=0;
while(ptr<=end){
        if(*ptr==element){
          printf("%d is found at %d position.",element,i);
          check++;
        break;

        }
        i++;
        ptr++;

}
if(check==0){
    printf("%d does not exists in array.",element);
}

}

