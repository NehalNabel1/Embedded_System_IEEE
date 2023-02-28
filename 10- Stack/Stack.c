#include "Stack.h"


void CreateStack (Stack *ps){
    ps->top=0;       //*ps.top=0;

}
int StackFull(Stack *ps){
    if(ps->top==MAXSTACK){
        return 1;
    }
    else{
        return 0;
    }
}

void Push(StackEntry e,Stack *ps){
ps->entry[ps->top]=e;
ps->top++;


}
int StackEmpty(Stack *ps){
return !ps->top;

}

void Pop(StackEntry *pe,Stack *ps ){
ps->top--;
*pe=ps->entry[ps->top];


}

void StackTop(StackEntry *pe,Stack *ps){

*pe=ps->entry[ps->top-1];

}

int StackSize(Stack*ps){
return ps->top;
}
//it destroys the elements of the stack and initialized it again
void ClearStack (Stack *ps){
ps->top=0;

}
void TraverseStack(Stack *ps,void(*pf)(StackEntry)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }


}
