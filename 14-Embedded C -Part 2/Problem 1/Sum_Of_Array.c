#include "Sum_Of_Array.h"
 int Sum_Of_Elements(int *ptr ,int size){
     int sum =0;
     for(int i=0;i<size;i++){
        sum+=*(ptr+i);
     }
 return sum;


 }
