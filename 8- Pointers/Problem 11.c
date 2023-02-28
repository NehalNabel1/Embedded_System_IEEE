#include <stdio.h>
#include <stdlib.h>
#define Max 100
#define Row 3
#define colom 3

void input_array(int arr[][colom]);
void print_array(int arr[][colom]);
void product (int arr1[][colom],int arr2[][colom],int arr3[][colom]);

int main()
{
    int size,element;
    int arr1[Row][colom],arr2[Row][colom],arr3[Row][colom];
    printf("Input elements of matrix1:");
    input_array(arr1);
    printf("Input elements of matrix2:");
    input_array(arr2);
    product(arr1,arr2,arr3);
    printf("Product of matrices is : \n");
    print_array(arr3);





       return 0;
}

void input_array(int arr[][colom]){
    for(int i=0;i<Row;i++){
        for(int j=0;j<colom;j++){

        scanf("%d",&arr[i][j]);
    }
    }



}
void product (int arr1[][colom],int arr2[][colom],int arr3[][colom]){
    int sum=0;
    for(int row=0;row<Row;row++){
            for(int col=0;col<colom;col++){


                  for(int i=0;i<Row;i++){
                    sum+=(*(*(arr1+row)+i)) * (*(*(arr2+i)+col));}

                   *(*(arr3+row)+col)=sum;
                   sum=0;
            }
    }
}

void print_array(int arr[][colom]){
    for(int row=0;row<Row;row++){
            for(int col=0;col<colom;col++){
                    printf("%d   ",*(*(arr+row)+col));
            }
            printf("\n");}




}


