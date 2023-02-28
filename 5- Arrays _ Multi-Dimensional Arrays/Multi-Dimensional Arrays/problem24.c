#include <stdio.h>
#include <stdlib.h>
# define n 3
int main()
{
    int row,col,arr1[n][n],arr2[n][n],arr3[n][n] ;
    printf("Input elements in 3x3 matrix1:\n");
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
            scanf("%d",&arr1[row][col]);}

    }

   printf("Input elements in 3x3 matrix2:\n");
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
            scanf("%d",&arr2[row][col]);}


    }
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
         arr3[row][col]=arr1[row][col]- arr2[row][col];}
    }

    printf("Difference of both matrices = \n");

    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
       printf("%d ",arr3[row][col]) ; }
       printf("\n");
    }


        return 0;
}
