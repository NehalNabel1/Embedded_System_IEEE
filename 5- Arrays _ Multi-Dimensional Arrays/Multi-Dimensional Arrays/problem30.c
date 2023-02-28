#include <stdio.h>
#include <stdlib.h>
# define n 3
int main()
{
    int row,col,arr1[n][n],arr2[n][n],sum=0 ;
    printf("Input elements in 3x3 matrix:\n");
    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
            scanf("%d",&arr1[row][col]);}

    }


    for(row=0;row<n;row++){
            for(col=0;col<n;col++){
                    sum+=arr1[row][col];
            }
     printf("\nSum of row %d = %d",row+1,sum);
     sum=0;
    }

        for(col=0;col<n;col++){
                     for(row=0;row<n;row++){
                    sum+=arr1[row][col];
            }
     printf("\nSum of Sum of column %d = %d",col+1,sum);
     sum=0;
    }




        return 0;
}
