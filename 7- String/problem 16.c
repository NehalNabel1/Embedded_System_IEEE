#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,n=0,size;
    char s[Max],c;
    printf("Input string:");
    gets(s);
    printf("Input character to search: ");
    c=getchar();
    while(s[size]!='\0'){
        size++;
    }

    for(i=0;i<size ;i++){
        if(s[i]==c){
            if(n==0){
                printf("'%c' found at index: ",c);
            }
            n=1;
         printf("%d ,",i);

        }

    }
    if(n==0){
      printf("'%c' is not found ",c);

    }





    return 0;
}
