#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isarmstrongnum(int num);
void armsrongnum (int lower,int upper);
int main()

{
    int lower,upper;

    printf("Input lower limit:");
    fflush(stdin);
    scanf("%d",&lower);
    printf("Input upper limit:");
    fflush(stdin);
    scanf("%d",&upper);

    printf("Armstrong numbers between %d to %d are:",lower,upper);

    armsrongnum(lower,upper);

    return 0;
}
 void armsrongnum (int lower,int upper){

 while (lower<=upper){

    if(isarmstrongnum(lower)){
        printf("%d ,",lower);
    }
    lower++;
   }
}

int isarmstrongnum(int num){
  int armstrong=num;
  int Num,sum=0;
  int length =sizeof(num);
 for(int i=0;i<length;i++)
 {

    Num=num%10;
    int power=pow(Num,length-1);
    sum=sum + power;
    num=num/10;


}
if(sum==armstrong){
    return 1;
}
else {
    return 0 ;
}


}
