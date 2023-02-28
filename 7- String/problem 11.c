#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{

    char s[Max],rev[Max];
    printf("Input string:");
    gets(s);
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    int j=0;
    for(int i=size-1;i>=0;i--){
        rev[j]=s[i];
        j++;
    }
    rev[j]='\0';
    printf("Reverse string: %s",rev);



    return 0;
}
