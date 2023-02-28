#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int size ,i;
    char str1[Max],str2[Max];
   printf("Input string:");
   gets(str1);
   size=strlen(str1);
   printf("%d\n",size);
  for( i=0;i<size; i++){
        str2[i]=str1[i];

  }
  str2[i] = '\0';
  size=strlen(str2);
  printf("%d\n",size);
  printf("Original string: %s\n",str1);
  printf("Copied string: %s",str2);


    return 0;
}
