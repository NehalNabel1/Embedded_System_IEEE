#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Physics, Chemistry, Biology,Math,Computer ;
    printf("Input marks of five subjects:");

    scanf("%d%d%d%d%d",&Physics,& Chemistry,& Biology,&Math,&Computer);
     float percentage  = (Physics+ Chemistry+ Biology+ Math +Computer)/5.0;
        printf("Percentage = %.2f\n",percentage);

        if( percentage >= 90 ){
        printf("Grade A");}
        else if( percentage >= 80 ){
        printf("Grade B");}
       else if( percentage >= 70 ){
        printf("Grade C");}
       else if( percentage >= 40 ){
        printf("Grade E");}
       else if( percentage < 40 ){
        printf("Grade F");}


    return 0;
}
