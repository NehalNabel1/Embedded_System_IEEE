#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int main()
{
    int reg ,bit_num ,num;
    printf("Enter The Value Of The Register\n");
    scanf("%d",&reg);
    printf("Choose\n1.Set\n2.Clear\n3.Toggle\n");
    scanf("%d",&num);
    printf("Enter The Bit Number :");
    scanf("%d",&bit_num);
    switch(num){
    case 1:
        Set(&reg,bit_num);
        printf("The Value Of The Register After Set Bit :%d",reg);
        break;
    case 2:
        Clear(&reg,bit_num);
        printf("The Value Of The Register After Clear Bit :%d",reg);
        break;
    case 3:
        Toggle(&reg,bit_num);
        printf("The Value Of The Register After Toggle Bit :%d",reg);
        break;
    default:
        printf("Wrong choice");
        break;



    }




    return 0;
}
