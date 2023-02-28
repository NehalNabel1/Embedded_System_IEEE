#include <stdio.h>
#include <stdlib.h>
#define Max 100


int main()
{
    int size;
    char str[Max],reverse[Max];
    printf("Enter the string : ");
    gets(str);
    char *ptr=str;
    char *re=reverse;
    while(*ptr !='\0'){
            size++;
            ptr++;
    }
    int n=size;
   ptr--;
    while(size !=0){
            *re=*ptr;
             ptr--;
             re++;
             size--;

    }
    reverse[n]='\0';
    printf("Reverse string: %s",reverse);





       return 0;
}


