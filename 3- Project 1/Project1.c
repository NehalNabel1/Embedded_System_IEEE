#include <stdio.h>
#include <stdlib.h>

int main()
{
      float price=0;
      int ItemNum,teanum=0,sugarnum=0,milknum=0,chocolatenum=0,pepsinum=0;
      char item,word,word2;
      int n=0;//n is a counter for the loop
      printf("Welcome to Nehal Resturant !\n");
      printf("2 items are required as a minimum for one order and If you ordered more than 5 items, you will get a 20% discount on the total fee.\n");
      // we will use counter n=0 and increase it to 1 if the customer order any item
      // i will ask the customer if he want to continue if he does not , the loop will end
      //if he want to continue i will decrease the counter again to 0
     do{
      printf("Press T if you want Tea\n S if you want Sugar\n M if you want Milk\n" );
      printf(" C if you want chocolate\n P if you want Pepsi\n ");
      fflush(stdin);
      scanf("%c",&item);
      switch(item){
       case 'T' :
           price+=8;
           teanum++;
           n=1;
         break;
       case 'S' :
           price+=10;
           sugarnum++;
           n=1;
            break;
       case 'M' :
           price+=11;
           milknum++;
           n=1;
            break;
       case 'C':
           price+=8;
           chocolatenum++;
           n=1;
            break;
       case'P' :
           price+=6;
           pepsinum++;
           n=1;
            break;
       default :
        printf("Please,Enter the correct letter\n");
        fflush(stdin);
        break;
      }
      printf("Do you want to continue shopping ?\n write Y for yes and N for No\n");
      fflush(stdin);
      scanf("%c",&word);

      if(word=='Y'){
        n=0;
      }

     } while(n==0);

      ItemNum=teanum+sugarnum+milknum+chocolatenum+pepsinum;
     if (ItemNum<2){
        printf("Sorry ! your order is canceled because 2 items are required as a minimum\n ");
     }
     else {
        if(price <10){
            price+=2;

        }
        else {
            price +=3;
        }

     printf("Do you want to overnight shipping ?\n");
     fflush(stdin);
     scanf("%c",&word2);
      if(word2=='Y'){
        price+=5;
      }
      // check if the customer ordered more than 5 items get a 20% discount on the total fee
      if(ItemNum>5){
        price =price *0.2 ;
      }
      //code for print detailed receipt so we check first if the customer order this item or not and we will do this 5 times
      if(teanum>0){
            printf("Number of packet of tea is %d , the price = %d$n",teanum,(teanum*8));
      }
      if(sugarnum>0){
            printf("Number of packet of Sugar is %d , the price = %d$\n",sugarnum,(sugarnum*10));
      }
      if( milknum>0){
            printf("Number of packet of Milk is %d , the price = %d$\n",milknum ,( milknum*11));     ;
      }
      if(chocolatenum>0){
            printf("Number of chocolate is %d , the price = %d$\n",chocolatenum,(chocolatenum*8));
      }
      if(pepsinum>0){
            printf("Number of Pepsi is %d , the price = %d$\n",pepsinum,(pepsinum*6));
      }
      // print the total price
      printf("Total price is %.2f $", price);
     }
    return 0;
}

