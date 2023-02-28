#include <stdio.h>
#include <stdlib.h>
# define max 1000
int main()
{
    int i,j,p,arr1[max],arr2[max],size1,size2,sizeofMerged ,d,Mergedarr[max] ;
    printf("Input size of first arry: ");
    fflush(stdin);
    scanf("%d",&size1);
    printf("\nInput first array elements:");
    for(i=0;i<size1;i++){
            scanf("%d",&arr1[i]);

    }

    printf("\nInput size of second arry: ");
    fflush(stdin);
    scanf("%d",&size2);
   printf("\nInput second array elements:");
   for(i=0;i<size2;i++){
            scanf("%d",&arr2[i]);

    }
    sizeofMerged=size1+size2 ;
    int k=0,h=0 ;
    for(i=0;i <sizeofMerged ; i++){

          if(k < size1 )  {


           Mergedarr[i]=arr1[k];
           k++;
           continue;}

           if ( h < size2){

           Mergedarr[i]=arr2[h];
           h++;
           continue;}

          else {
            break;
          }

          }
        for(i=0;i<sizeofMerged-1;i++){
           for(j=i+1;j<sizeofMerged-1;j++){
            if(Mergedarr[i]>Mergedarr[j]){
            p=Mergedarr[i];
           Mergedarr[i]=Mergedarr[j];
            Mergedarr[j]=p;
           }

    }
    }

          printf("\nMerged array in ascending order = ");

      for(i=0;i<sizeofMerged;i++){

       printf("%d ,",Mergedarr[i]);

           }

        return 0;
}

