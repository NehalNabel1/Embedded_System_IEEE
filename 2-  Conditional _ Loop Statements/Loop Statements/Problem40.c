#include <stdio.h>
#include <stdlib.h>

int main()
{

     int num , digit,count=0,Decimal=0;
     long long binary =1ll;

     printf("Input number:");
     scanf("%d",&num);
     do{
     digit=num%10;

     if(digit==1){
      Decimal=Decimal + pow(2,count)  ;
     }
     count++;
     num=num/10;
     }
     while(num>0);


    printf("Decimal: %d",Decimal);



    return 0;
}
