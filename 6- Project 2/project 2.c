#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 20
void Belowavr(int average ,int score[], int num,char name[num][20]);
int MaxScore (int score[] ,int num,char name[num][20] );
int main()
{
    int num,max=0,sum=0,average;
    int score[Max];

    printf("Welcome ! Please enter numbers of student : ");
    scanf("%d",&num);
    //array of strings to put names in it
     char name[num][Max];

    for(int i=0;i<num;i++){
    printf("\nStudent's name :");
    gets(name[i]);
    scanf("%s",name[i]);
    printf("\nThe score :");
    scanf("%d",&score[i]);
    sum+=score[i];
    }
    average =sum/num;

    printf("Students with low scores :\n");
    //calling two functions to get highest score and scores below average
    Belowavr(average ,score,num , name);
    MaxScore(score,num,name);




    return 0;
}
//function to calculate highest test score and name of the top student
int MaxScore (int score[],int num,char name[num][20]){
    int max=0,a=0;
 for(int i=0;i<num;i++)  {
  if(score[i] >max){
    max=score[i];
    a=i;}

}
printf("\nHighest test score : %d", max);
printf("\nName of the top student : %s",name[a]);
printf("\nCongratulations %s ! We wish you further progress! ",name[a]);
return a;

}

//function to calculate names of all the students whose test scores are below the average
void Belowavr(int average ,int score[],int num,char name[num][20] ){
  for(int i=0;i<num;i++)  {
    if(score[i]< average ){
          printf("%s",name[i]);
          printf("\t%d\n",score[i]);


    }
}
printf("The students whose name is mentioned must study more than that.\n");
}

