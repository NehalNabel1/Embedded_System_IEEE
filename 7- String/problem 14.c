#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,size;
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
          break;
        }

    }
    if(i==size){
      printf("'%c' is not found ",c);

    }
    else{

    printf("'%c' is found at index %d",c,i);}



    return 0;
}
