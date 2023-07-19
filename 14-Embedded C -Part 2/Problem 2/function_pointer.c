#include "function_pointer.h"

// (*p) is Function pointer that can point to functions with int return type and two int parameters.

int fun (int(*p)(int,int),int num1,int num2){

(*p)(num1,num2);

}
//add
int add(int num1,int num2){

return num1 +num2 ;
}
//sub
int sub(int num1,int num2){

return num1-num2 ;
}
//mult
int mult(int num1,int num2){

return num1*num2 ;
}
//div
int divide(int num1,int num2){

return num1/num2 ;
}


