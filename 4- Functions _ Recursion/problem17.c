#include <stdio.h>
#include <stdlib.h>
sum=0;
int sumofdigits(int num);
int main()
{
    int num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Sum of digits: %d",sumofdigits(num));
    return 0;
}

int sumofdigits(int num){
int digit;
digit=num%10;
sum+=digit;
if(num!=0){
sumofdigits(num/10);
}
else{
    return sum ;
}
}
