#include <stdio.h>
#include <stdlib.h>
#include "function_pointer.h"
int main()
{
    int num1,num2 ,result;

    printf("Enter the two numbers : \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    result =fun(&add,num1,num2);
    printf("Sum of the two numbers : %d \n",result);
    result =fun(&sub,num1,num2);
    printf("Subtraction of the two numbers : %d \n",result);
    result =fun(&mult,num1,num2);
    printf("Multiply the two numbers : %d \n",result);
    if(num2 != 0){
    result =fun(&divide,num1,num2);
    printf("Divide the two numbers : %d \n",result);
    }
    else{
        printf("Error :number two equal zero");
    }





    return 0;
}
