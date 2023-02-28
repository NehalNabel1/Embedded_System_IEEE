#include <stdio.h>
#include <stdlib.h>
int Factorial(int num);
int main()
{
    int num ;
    printf("Input any number:");
    scanf("%d",&num);
    printf("Factorial of %d = %d",num,Factorial(num));
    return 0;
}
int Factorial(int num){

if(num==1){
    return 1;
}
return num * Factorial(num-1);

}
