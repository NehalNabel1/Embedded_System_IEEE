#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,index=-1,size;
    char s[Max],c;
    printf("Input string:");
    gets(s);
    printf("Input character to search: ");
    scanf("%c",&c);
    while(s[size]!='\0'){
        size++;
    }

    for(i=0;i<size ;i++){
        if(s[i]==c){
         index=i;

        }

    }
    if(index==-1){
      printf("'%c' is not found ",c);

    }
    else{

    printf("Last index of '%c' is %d",c,index);}



    return 0;
}
