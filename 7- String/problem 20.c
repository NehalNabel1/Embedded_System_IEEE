#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i;
    char s[Max],c,f[26];
    printf("Input string:");
    gets(s);
    for(i=0; i<26; i++)
    {
        f[i] = 0;
    }
    printf("Frequency of all characters in the given string:\n");
       for(i=0;i<strlen(s);i++){
             if(s[i]>='A' && s[i]<='Z'){
                  f[s[i]-65]++;
             }
             else if (s[i]>='a' && s[i]<='z'){
                f[s[i]-97]++;
             }
       }


    int j=0;
    for(j=0;j<26;j++){
            if(f[j]!=0){

           printf("'%c' = %d\n",(j+97),f[j]);}

           }
    return 0;
}
