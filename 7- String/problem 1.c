#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size=0;
    char s[100];
   printf("Input string:");
   gets(s);
  for(int i=0;s[i]!='\0'; i++){
        size++;

  }
  printf("Length of string: %d",size);


    return 0;
}
