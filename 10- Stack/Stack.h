#define MAXSTACK 100
typedef unsigned char StackEntry;

typedef struct stack{
int top;
StackEntry entry[MAXSTACK];

}Stack;

void CreateStack (Stack *ps);
int StackFull(Stack *ps);
void Push(StackEntry e,Stack *ps);
int StackEmpty(Stack *ps);
void Pop(StackEntry *pe,Stack *ps );
void StackTop(StackEntry *pe,Stack *ps);
int StackSize(Stack*ps);
void ClearStack (Stack *ps);
void TraverseStack(Stack *ps,void(*pf)(StackEntry));

