#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 100




int main()
{
    int size=0;
    char str1[Max],str2[Max];
    printf("Input string1:");
    gets(str1);
    printf("Input string2:");
    gets(str2);
    char *ptr1=str1;
    char *ptr2=str2;

    while(*ptr1 != '\0'){
            size++;
             ptr1++;

    }
    while(*ptr2 != '\0'){
     size++;
    *ptr1=*ptr2;
    ptr1++;
    ptr2++;
    }
    str1[size]='\0';




    printf("Concatenated string: %s",str1);


       return 0;
}

