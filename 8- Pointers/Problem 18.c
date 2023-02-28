#include <stdio.h>
#include <stdlib.h>
#define Max 100

void Input_array(int arr[],int size);
void getMinMax(int arr[],int size,int *min,int *max);

int main()
{

    int arr[Max],size,min,max;
    printf("Input array size :");
    scanf("%d",&size);
    printf("Input array elements:");
    Input_array(arr,size);
    getMinMax(arr,size,&min,&max);
    printf("Minimum element in array: %d\n",min);
    printf("Maximum element in array: %d\n",max);


       return 0;
}




void Input_array(int arr[],int size){

for(int i=0;i<size;i++){
    scanf("%d",arr+i);
}

}
void getMinMax(int arr[],int size,int *min,int *max){
    *min=*(arr+0);
    *max=*(arr+0);


    for (int i = 0; i < size; i++){

        if(*(arr+i) > *max){
            *max=*(arr+i);
        }
        if(*(arr+i)<*min){
                *min=*(arr+i);


        }
    }




}






