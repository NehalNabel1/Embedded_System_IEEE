#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    char s[Max];
    printf("Input string:");
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;


        }

    }
    printf("Toggled case string: %s",s);
    return 0;
}
