#include "operations.h"


void Set(int *reg,int bit_num ){
    *reg|=(1<<bit_num);

}

void Clear(int *reg,int bit_num){
    *reg &=~(1<<bit_num);
}

void Toggle(int *reg,int bit_num ){
    *reg^=(1<<bit_num);

}
