#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
   int i,n=0,j=0;
   char str1[Max],str2[Max];
   printf("Input string1:");
   gets(str1);
   printf("Input string2:");
   gets(str2);
   int size1=strlen(str1);
   int size2=strlen(str2);
   int size3=size1+size2;

  for( i=size1;i<size3; i++){

       str1[i]=str2[j];
       j++;

  }
   str1[i] = '\0';

  printf("Concatenated string: %s",str1);

    return 0;
}
