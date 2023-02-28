#include <stdio.h>
#include <stdlib.h>
int max(int n1,int n2);
int min (int n1 ,int n2);
int main()

{
    int n1,n2;
    printf("Input two numbers:");
    scanf("%d%d",&n1,&n2);
   printf("Maximum = %d\n",max(n1,n2));
   printf("Minimum = %d",min(n1,n2));
    return 0;
}
int max(int n1,int n2){
if(n1>n2){
    return n1 ;

}
else{
    return n2 ;
  }
}
int min (int n1 ,int n2){

if(n1<n2){
    return n1 ;

}
else{
    return n2 ;
  }

}
