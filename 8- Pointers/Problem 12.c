#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 100




int main()
{
    int size=0;
    char text[Max] ;
    printf("Input string: ");
    gets(text);
   char *ptr =text;


    while(*ptr != '\0'){
            size++;
             ptr++;

    }
    printf("Length of string: %d",size);

       return 0;
}

