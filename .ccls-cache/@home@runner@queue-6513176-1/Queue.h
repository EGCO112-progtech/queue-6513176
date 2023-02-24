#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
typedef struct {
	 NodePtr headPtr,tailPtr;
	int size,round;
}Queue;
void cal(int n,int m);

void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->order_number = x;
  new_node->n = y;
  new_node->nextPtr = NULL;
  
  if(q->headPtr == NULL){
    q->headPtr = new_node;
  }
  else q->tailPtr ->nextPtr = new_node;
}
  q->tailPtr = new_node;
  q->size++;

  /*Finish enqueue */
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->order_number;
     q->headPtr=q->headPtr->nextPtr;

       printf("\ncustomer No.%d\n",++q->round);
  switch(t->order_number)
       {
         case 1 :printf("ramen\n"); cal(t->n,100);break;
         case 2 :printf("special ramen  \n"); cal(t->n,120);break;
         case 3 :printf("super special ramen \n"); cal(t->n,150);break;
         default :printf("No food\n");
       }
       /*Finish dequeue */
     if(t==NULL)q->tailPtr=NULL;
     
   
     q->size--;
   }
  else{
   printf("Empty queue");}
  free(t);
   return 0;
}

void cal(int n,int m){
  int pay=0;
  Queue *q;
  printf("You have to pay %d \n",n*m );
  while(pay<n*m){
  printf("cash :");
  scanf("%d",&pay);
    }
  if(pay>n*m) {printf("change : %d\n",pay-n*m);}
printf("thank you\n\n");
  
}
int clearq(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->order_number;
     q->headPtr=q->headPtr->nextPtr;
       /*Finish dequeue */
     if(t==NULL)q->tailPtr=NULL;
     
   
     q->size--;
   }
  else{
   printf("Empty queue");}
  free(t);
   return 0;
}