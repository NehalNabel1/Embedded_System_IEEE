#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lastdigit ,num,reverse = 0;



     printf("Input num:");
     scanf("%d", &num);
     int num1=num;
    do{
        lastdigit = num %10;
        reverse=reverse*10;
        reverse=reverse+ lastdigit;
        num =num/10;
    }while(num>0);


    printf("Reverse of %d = %d",num1, reverse);



    return 0;
}
