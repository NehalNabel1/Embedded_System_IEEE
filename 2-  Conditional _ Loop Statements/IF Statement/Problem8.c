#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Input character:");
    scanf("%c",&c);
    if(c=='a'||c=='o'||c=='e'||c=='i'||c=='u'||c=='A'||c=='O'||c==' E'||c=='I'||c=='U'){
       printf("'%c' is vowel",c);
    }
    else  if((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z')){
        printf("'%c' is consonant",c);
    }
    else{
        printf("'%c' is not an alphabet", c);
    }



    return 0;
}
