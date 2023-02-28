#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
int main()
{
    int i,word=0,n=0,k=0;
    char s[Max],c,st[Max];
    char nonword[]=".,;\n ";
    char w[Max];
    printf("Input string:");
    gets(s);
    printf("Input word to search:");
    gets(w);
   for(i=0; i<strlen(s); i++){
            if(strchr(nonword,s[i])!=NULL){

                word++;

            }
            if(s[i]==w[0]){
                for( k=0;k<strlen(w);k++){
                    if(s[i]!=w[k]){

                        break;
                    }
                    i++;

                }
                word++;
                if(k==strlen(w)){
                        printf("'%s' is found at index %d",w,word);
                        n=1;

                }

            }
            if(n==1){
                break;
            }

    }
    if(n==0){
        printf("'%s' is not found",w);
    }



    return 0;
}
