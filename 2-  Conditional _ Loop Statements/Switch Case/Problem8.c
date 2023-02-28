#include <stdio.h>
#include <stdlib.h>

int main()
{
      float num1,num2,sum;
      char Operator ;
       printf("Enter [number 1] [+ - * /] [number 2]\n");
       scanf("%f %c %f",&num1,&Operator,&num2);
       switch(Operator){
       case '+':
        sum=num1+num2;
        printf("%.2f %c %.2f=%.2f",num1,Operator,num2,sum);
        break;
       case '-':
        sum=num1-num2;
        printf("%.2f %c %.2f=%.2f",num1,Operator,num2,sum);
        break;
       case '/':
        sum=num1/num2;
        printf("%.2f %c %.2f=%.2f",num1,Operator,num2,sum);
        break;
       case '*':
        sum=num1*num2;
        printf("%.2f %c %.2f=%.2f",num1,Operator,num2,sum);
        break;
        default:
        printf("Invalid operator");


       }


    return 0;
}
