#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
   int i,n=0;
   char str1[Max],str2[Max];
   printf("Input string1:");
   gets(str1);
   printf("Input string2:");
   gets(str2);
   int size1=strlen(str1);
   int size2=strlen(str2);
   if(size1!=size2){
    printf("Both strings are not equal.");
   }
   else{

  for( i=0;i<size1; i++){
   if(str1[i]!=str2[i]){
    n=1;
    break;
   }

  }
   if(n==1){
        printf("Both strings are not equal.");

   }
   else{
       printf("Both strings are lexographically equal.");

   }

  }

    return 0;
}
