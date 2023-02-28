#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int n=0;
    char s[Max],rev[Max];
    printf("Input string:");
    gets(s);
    int size=0;
    while(s[size]!='\0'){
        size++;
    }

    for(int i=0;i<size ;i++){
        if(s[i]!= s[size-1-i]){
              n=1;
            break;
        }

    }
   if(n==0){
    printf("Palindrome string");}
    else{

    printf("Not Palindrome string");}



    return 0;
}
