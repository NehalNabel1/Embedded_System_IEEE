#include <stdio.h>
#include <stdlib.h>
cube();
int main()

{
    int n;
    printf("Input any number:");
    scanf("%d",&n);
    printf("Cube of %d = %d",n,cube(n));
    return 0;
}
int cube(int n){
int cube ;
cube= n*n*n;
return cube ;

}
