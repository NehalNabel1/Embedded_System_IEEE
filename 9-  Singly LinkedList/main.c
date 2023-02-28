#include <stdio.h>
#include <stdlib.h>
#include "datatype.h"
typedef struct Node{
u16 data;
struct Node*next;
}Node_t;


void Add_Node_End(u16 data);
void print_nodes(void);
void delete_Node_end(void);
void delete_Node_begin(void);
void Add_Node_Postion (u16 Pos, u16 data);
void delete_Node_postion(u16 pos);


Node_t * Add_Node_Begin(Node_t *head,u16 data);
Node_t *head=NULL;

int main()
{
    u16 n,Data,c,h=0;


    do{
    printf("Enter 1 to add node\n");
    printf("Enter 2 to print nodes\n");
    printf("Enter 7 to delete node\n");
    printf("Enter 3 to exit\n");
    printf("-----------------\n");
    scanf("%d",&n);
     if(n==1){
     printf("To add Node in the End Enter 4 \n");
     printf("To add Node in the begin Enter 5 \n");
     printf("To add Node in certain position Enter 6 \n");
     scanf("%d",&c);
     if(c==4){
     printf("Enter data of node : ");
     scanf("%d",&Data);
     Add_Node_End(Data);


     }
     else if(c==5){
      printf("Enter data of node : ");
      scanf("%d",&Data);
      head=Add_Node_Begin(head,Data);

     }
     else if(c==6){
      int pos;
     printf("Enter position number : ");
     scanf("%d",&pos);
     printf("\nEnter data of node : ");
      scanf("%d",&Data);
      Add_Node_Postion(pos,Data);

     }
     else{
        printf("Enter Correct Number\n");
     }
    }
    else if(n==2){
        print_nodes();
    }
    else if(n==7){
            u16 num;
        printf("Enter 8 to Delete node from begin :\n");
        printf("Enter 9 to Delete node from end :\n");
        printf("Enter 10 to Delete node from Certain Position :\n");
        scanf("%d",&num);
        if(num==8){
                delete_Node_begin();


        }
        else if(num==9){
            delete_Node_end();


        }
        else if(num ==10){
            int pos;
             printf("Enter position number : ");
             scanf("%d",&pos);
             delete_Node_postion(pos);

        }
        else{
            printf("Enter Correct Number\n");
        }

    }
    else if(n==3){
        h=1;
        printf("Exit");

    }

    }
    while(h!=1);


    return 0;
}

/*Function to add node in the end*/

void Add_Node_End(u16 data){
    Node_t *New_Node=(Node_t*)malloc(sizeof(Node_t));
    Node_t *ptr=head;
    New_Node->data=data;
    New_Node->next=NULL;
    if(head==NULL){
        head=New_Node;
    }
    else {
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=New_Node;


    }

printf("Node added\n");


}
/*Function to print nodes*/
void print_nodes(void){

Node_t *ptr=head;

u16 i=1;
  if(head==NULL){
    printf("Linked List is Empty");
  }
else{
 while(ptr!=NULL){
        printf("Data of Node %d = %d\n",i,ptr->data);
            ptr=ptr->next;
            i++;
        }

}
}
/*Function to add node in the begin*/
Node_t *Add_Node_Begin(Node_t *head,u16 data){

    Node_t *New_Node=(Node_t*)malloc(sizeof(Node_t));
    Node_t *ptr=head;
    New_Node->data=data;
    New_Node->next=NULL;
    if(head==NULL){
        New_Node=head;

    }
    else{
        New_Node->next=head;

    }
    head=New_Node;


printf("Node added\n");

return head;


}
/*Function to add node in certain position*/
void Add_Node_Postion (u16 Pos, u16 data){
    Node_t *New_Node=(Node_t*)malloc(sizeof(Node_t));
    New_Node->data=data;
    Node_t *ptr1=head;

    int i=1,check=0;
    while(ptr1!=NULL){
            if(Pos==1){
              New_Node->next=head;
              head= New_Node;
               check=1;
                 break;
            }

        if(i==(Pos-1)){
                New_Node->next=ptr1->next;
                ptr1->next=New_Node;

                 check=1;
                 break;

        }
        else{
          ptr1=ptr1->next ;


        }
        i++;

   }
    if(check==0){
        printf("Position not found\n");
    }
    else{
        printf("Node added\n");
    }

}

/*Function to delete Node from begin*/
void delete_Node_begin(){
Node_t *ptr=head;
if(head==NULL){
    printf("Linked List is is already empty !");
}
else{
   head=head->next;
   free(ptr);
printf("Node deleted \n");
}

}
/*Function to delete Node from end*/
void delete_Node_end(){
    Node_t *ptr=head;
    Node_t *ptr2=head;
    if(head==NULL){
    printf("Linked List is is already empty !");
}
else{
   while(ptr->next!=NULL){
     ptr2=ptr;
    ptr=ptr->next;
   }
   ptr2->next=NULL;
   free(ptr);

printf("Node deleted \n");
}

}


/*Function to delete Node from certain position*/
void delete_Node_postion(u16 pos){
   Node_t *ptr=head;
   Node_t *ptr2=head;
   u16 i=1,check=0;

    if(head==NULL){

    printf("Linked List is is already empty !");
}
else{
        pos--;
   while(ptr->next !=NULL){
     ptr2=ptr;
    ptr=ptr->next;
   if(i==pos){
   ptr2->next=ptr->next;
   free(ptr);
   check=1;
   break;
   }
}

if(check==0){
    printf("Position not found\n");
}
else{
    printf("Node deleted \n");
}
}
}





