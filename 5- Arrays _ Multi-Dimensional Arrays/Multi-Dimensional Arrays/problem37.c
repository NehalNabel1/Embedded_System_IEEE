#include <stdio.h>1
#include <stdlib.h>
# define n 2
int main()
{
    int row,col,arr1[n][n],Determinant ;
    printf("Input elements in 2x2 matrix: \n");
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
            scanf("%d",&arr1[row][col]);}

    }

    Determinant= (arr1[0][0] * arr1[1][1]) - (arr1[0][1] * arr1[1][0]);
    printf("Determinant of the matrix = %d",Determinant);


        return 0;
}
