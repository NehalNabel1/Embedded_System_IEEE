#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Input size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 printf("Output:");
 for(int i=0;i<n;i++){
   printf("%d  ",arr[i]);}

    return 0;
}
