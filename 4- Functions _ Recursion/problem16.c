#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int digit,sum=0;
int reverse (int num);
void ispalindrome(int num);
int main()

{
    int num;
    printf("Input number:");
    scanf("%d",&num);
    ispalindrome( num);

    return 0;
}
int  reverse (int num){
  if(num!=0){
 digit=num%10;
 sum=sum*10 + digit;
 reverse(num/10);}

else {
    return sum;
}
return sum ;
}

void ispalindrome(int num){
if(num ==reverse(num)){
    printf("%d is palindrome\n",num);


}
else{
    printf("%d is not palindrome",num);

}
}
