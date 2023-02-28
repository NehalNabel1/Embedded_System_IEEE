#include <stdio.h>1
#include <stdlib.h>
# define n 3
int main()
{
    int row,col,arr1[n][n],arr2[n][n],d=0 ;
    printf("Input matrix elements:\n");
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
            scanf("%d",&arr1[row][col]);}

    }

     for(row=0;row<n;row++){
            for(col=0;col<n;col++){
         arr2[col][row]=arr1[row][col];
    }}
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
         if( arr1[row][col]!= arr2[row][col]){
            d++;
            break;
         }
      }
    }

            if(d==0){
                printf("Given matrix is symmetric matrix ");
            }
            else{
                printf("Given matrix is not symmetric matrix ");
                printf("%d",d);
            }




        return 0;
}
