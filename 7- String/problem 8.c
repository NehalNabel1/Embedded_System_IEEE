#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int alphabets=0,digits=0,other=0;
    char s[Max];
    printf("Input string:");
    gets(s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
            alphabets++;
        }
        else if(s[i]>='0' && s[i]<='9'){
                digits++;

        }
        else{
            other++;
        }
        i++;


    }
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d",other);
    return 0;
}
