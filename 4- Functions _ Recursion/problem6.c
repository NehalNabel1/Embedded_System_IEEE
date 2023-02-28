#include <stdio.h>
#include <stdlib.h>

int main()

{
    int lower,upper;
    printf("Input lower limit:");
    scanf("%d",&lower);
    printf("Input upper limit:");
    scanf("%d",&upper);
    isprime(lower,upper);

    return 0;
}

void isprime (int lower,int upper){
 int i,n=0;
 printf ("Prime numbers between %d-%d are:",lower,upper);
 for(int j=lower;j<=upper;j++){

 for(i=2;i<=j/2;i++){
   if(j%i==0) {
        n++;

       }
   }
if(n==0){
    printf("%d ",j);
}
n=0;
}

}
