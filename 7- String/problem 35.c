#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,j=0,space=0;
    char s[Max];
    printf("Input string:");
    gets(s);


       while(s[i]==' ' || s[i]=='\n' || s[i]=='\t'){
            space++;
            i++;

       }


   if(space!=0){

   for( j=0;j<strlen(s);j++){
    s[j]=s[j+space];
   }
   s[j]='\0';
   }
   printf("String after removing leading white spaces:\n");
   printf("%s",s);




    return 0;
}
