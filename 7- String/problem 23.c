#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,j=0;
    char s[Max],c,st[Max];
    printf("Input string:");
    gets(s);
    printf("Input character to remove : ");
    c=getchar();
    for(i=0; i<strlen(s); i++){
        if(s[i]!=c){
         st[j]=s[i];
         j++;}
    }
    printf("String after removing all '%c' : %s",c,st);



    return 0;
}
