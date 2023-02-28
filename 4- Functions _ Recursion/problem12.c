#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void even(int lower,int upper);
void odd(int lower,int upper);
int main()

{
    int lower,upper;

    printf("Input lower limit:");
    fflush(stdin);
    scanf("%d",&lower);
    printf("Input upper limit:");
    fflush(stdin);
    scanf("%d",&upper);
    if(lower%2==0){
      printf("Even numbers between %d to %d:",lower,upper);
      even(lower,upper);
      printf("\n");
      printf("Ood numbers between %d to %d:",lower,upper);
      odd(lower+1,upper);
    }
    else {
        printf("Even numbers between %d to %d:",lower,upper);
        even(lower+1,upper);
        printf("\n");
        printf("Ood numbers between %d to %d:",lower,upper);
        odd(lower,upper);
    }


    return 0;
}

void even(int lower,int upper){

  if (lower<=upper){
        printf(" %d ,",lower);
        even(lower+2,upper);

    }
}

void odd(int lower,int upper){

  if (lower<=upper){
        printf(" %d ,",lower);
        odd(lower+2,upper);

    }
}
