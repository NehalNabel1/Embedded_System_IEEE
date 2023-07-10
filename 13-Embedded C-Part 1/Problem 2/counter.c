#include "counter.h"

int Counter_Set(int reg){
    int count=0;
    while(reg!=0){
            if(reg%2!=0){
                count++;
            }
            reg=reg/2;

    }
    return count;

}
